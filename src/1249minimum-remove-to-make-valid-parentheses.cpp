#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
  string minRemoveToMakeValid(string s)
  {
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(')
      {
        st.push(i);
      }
      else if (s[i] == ')')
      {
        if (!st.empty() && s[st.top()] == '(')
        {
          st.pop();
        }
        else
        {
          st.push(i);
        }
      }
    }

    while (!st.empty())
    {
      s[st.top()] = '~';
      st.pop();
    }

    string result = "";

    for (int i = 0; i < s.size(); i++)
    {

      if (s[i] != '~')
      {
        result += s[i];
      }
    }

    // s.erase(remove(s.begin(), s.end(), '~'), s.end());

    return result;
  }
};

int main()
{
  Solution s;
  string str = "lee(t(c)o)de)";
  cout << s.minRemoveToMakeValid(str) << endl;
  return 0;
}