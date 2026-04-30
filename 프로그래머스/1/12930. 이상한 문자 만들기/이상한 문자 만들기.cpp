#include <string>
#include <vector>

using namespace std;

char toUpper(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch;
    else
        return ch - ('a' - 'A');
}

char toLower(char ch)
{
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else
        return ch + ('a' - 'A');
}

string solution(string s) {
    string answer = "";
    int idx = 0;
    for(int i = 0; i< s.length();i++)
    {
        if(s[i] == ' ')
        {
            idx = 0;
            answer += ' ';
            continue;
        }
        answer += idx%2 == 0 ? toUpper(s[i]) : toLower(s[i]);
        idx++;
    }
    return answer;
}