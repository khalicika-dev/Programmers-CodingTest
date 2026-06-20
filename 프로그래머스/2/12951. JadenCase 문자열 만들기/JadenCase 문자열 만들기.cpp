#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool firstChar = true;
    for(int i=0;i<s.length();i++)
    {
        char c = s[i];
        if(firstChar == true && s[i] >= 'a' && s[i] <= 'z')
        {
            c = s[i] - ('a' - 'A');
        }
        else if(firstChar == false && s[i] >= 'A' && s[i] <= 'Z')
        {
            c = s[i] + ('a' - 'A');
        }
        firstChar = false;
        if(s[i] == ' ')
        {
            firstChar = true;
        }
        answer += c;
    }
    return answer;
}