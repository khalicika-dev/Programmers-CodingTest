#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char c = ' ';
    int m = 0;  // matched
    int nm = 0; // not matched
    for(int i=0;i<s.length();i++)
    {
        if(m <= 0 && nm <= 0)
            c = s[i];
        if(s[i] == c)
            m++;
        else
            nm++;
        if(m == nm)
        {
            answer++;
            m = nm = 0;
        }
    }
    if(m != nm)
        answer++;
    return answer;
}