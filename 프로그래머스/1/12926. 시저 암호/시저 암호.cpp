#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length() ; i++)
    {
        char c = s[i];
        if(c >= 'a' && c <= 'z')
        {
            if(c+n > 'z')
                c += n - ('z' - 'a' + 1);
            else
                c += n;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            if(c+n > 'Z')
                c += n - ('Z' - 'A' + 1);
            else
                c += n;
        }
        answer += c;
    }
    return answer;
}