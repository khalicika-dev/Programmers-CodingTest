#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(int i=0; i<s.length();i++)
    {
        for(int cnt = 0; cnt<index; cnt++)
        {
            s[i]++;
            if(s[i] > 'z')
                s[i] = 'a';
            for(char c : skip)
            {
                if(s[i] == c)
                {
                    cnt--;
                    break;
                }
            }
        }
        answer += s[i];
    }
    return answer;
}