#include <vector>
#include <iostream>
#include <set>
#include <utility>

class Solution
{

public:
  bool exist(std::vector<std::vector<char>> &board, std::string word)
  {

    for (int i = 0; i < board.size(); i++)
    {
      for (int j = 0; j < board.at(i).size(); j++)
      {
        if (find(board, word, i, j, 0))
        {
          return true;
        }
      }
    }
    return false;
  }

  bool find(std::vector<std::vector<char>> &board, std::string word, int row, int col, int index)
  {
    size_t word_size = word.size();

    if (index == word_size)
    {
      return true;
    }

    if (index > word_size || row < 0 || row >= board.size() || col < 0 || col >= board.at(0).size() || board[row][col] != word.at(index))
    {
      return false;
    }

    char temp = board[row][col];
    board[row][col] = '~';

    if (find(board, word, row - 1, col, index + 1) ||
        find(board, word, row + 1, col, index + 1) ||
        find(board, word, row, col - 1, index + 1) ||
        find(board, word, row, col + 1, index + 1))
    {
      return true;
    }

    board[row][col] = temp;

    return false;
  }
};

void TEST(std::vector<std::vector<char>> board, std::string word, int testNumber, bool expected)
{
  Solution s;

  if (s.exist(board, word) != expected)
  {
    std::cout << "FAIL TEST (" << testNumber << ')' << std::endl;
  }
  else
  {
    std::cout << "PASS TEST (" << testNumber << ')' << std::endl;
  }
}

int main()
{
  TEST(std::vector<std::vector<char>>{
           std::vector<char>({'A', 'B', 'C', 'E'}),
           std::vector<char>({'S', 'F', 'C', 'S'}),
           std::vector<char>({'A', 'D', 'E', 'E'})},
       "ABCCED", 1, true);

  TEST(std::vector<std::vector<char>>{
           std::vector<char>({'A', 'B', 'C', 'E'}),
           std::vector<char>({'S', 'F', 'E', 'S'}),
           std::vector<char>({'A', 'D', 'E', 'E'})},
       "ABCB", 2, false);

  TEST(std::vector<std::vector<char>>{
           std::vector<char>({'A', 'A', 'A', 'A', 'A', 'A'}),
           std::vector<char>({'A', 'A', 'A', 'A', 'A', 'A'}),
           std::vector<char>({'A', 'A', 'A', 'A', 'A', 'A'}),
           std::vector<char>({'A', 'A', 'A', 'A', 'A', 'A'}),
           std::vector<char>({'A', 'A', 'A', 'A', 'A', 'A'}),
           std::vector<char>({'A', 'A', 'A', 'A', 'A', 'A'})},
       "AAAAAAAAAAAAAAa", 3, false);

  return 0;
}
