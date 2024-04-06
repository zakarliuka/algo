#include <iostream>
#include <stack>

const int DIFF = 32;

using namespace std;
class Solution
{
public:
  string makeGood(string s)
  {
    stack<char> st;

    for (size_t i = 0; i < s.size(); i++)
    {
      if (!st.empty() && abs(st.top() - s[i]) == DIFF)
      {
        st.pop();
      }
      else
      {
        st.push(s[i]);
      }
    }

    string result = "";
    while (!st.empty())
    {
      result = st.top() + result;
      st.pop();
    }

    return result;
  }
};

int main()
{
  Solution s;
  string str = "leEeetcode";
  cout << s.makeGood(str) << endl;

  return 0;
}