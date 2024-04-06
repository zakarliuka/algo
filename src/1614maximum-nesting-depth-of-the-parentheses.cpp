#include <iostream>

using namespace std;

class Solution
{
public:
  int maxDepth(string s)
  {
    int max = 0;
    int count = 0;

    for (size_t i = 0; i < s.size(); i++)
    {

      if (s.at(i) == '(')
      {
        count++;

        if (count > max)
        {
          max = count;
        }
      }
      if (s.at(i) == ')')
      {
        count--;
      }
    }

    return max;
  }
};

void TEST(string str, int answer, int testNumber)
{

  Solution s;

  int result = s.maxDepth(str);

  cout << "TEST (" << testNumber << "): " << (result == answer ? "PASS" : "FAIL") << " expected: " << answer << " result: " << result << endl;
}

int main()
{

  TEST("(1+(2*3)+((8)/4))+1", 3, 1);
  TEST("(1)+((2))+(((3)))", 3, 2);

  return 0;
}