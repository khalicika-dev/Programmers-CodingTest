#include <string>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    stack<char> c;
    
    for(int i=0;i<s.length();i++)
    {
        bool bCheck = true;
        while(!c.empty())
        {
            c.pop();
        }
        for(int j=0;j<s.length();j++)
        {
            if(s[j] == '{' || s[j] == '[' || s[j] == '(')
            {
                c.push(s[j]);
            }
            else if(s[j] == '}')
            {
                if(!c.empty() && c.top() == '{')
                {
                    c.pop();
                }
                else
                {
                    bCheck = false;
                    break;
                }
            }
            else if(s[j] == ')')
            {
                if(!c.empty() && c.top() == '(')
                {
                    c.pop();
                }
                else
                {
                    bCheck = false;
                    break;
                }
            }
            else if(s[j] == ']')
            {
                if(!c.empty() && c.top() == '[')
                {
                    c.pop();
                }
                else
                {
                    bCheck = false;
                    break;
                }
            }
        }
        if(c.empty() && bCheck == true)
        {
            answer++;
        }
        
        char temp = s[0];
        s = s.substr(1,-1) + temp;
    }
    return answer;
}