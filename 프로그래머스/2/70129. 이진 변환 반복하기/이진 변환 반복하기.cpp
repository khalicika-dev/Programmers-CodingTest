#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    string str = s;
    while(str != "1")
    {
        int len = 0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i] == '1')
            {
                len++;
            }
            else if(str[i] == '0')
            {
                answer[1]++;
            }
        }
        str = "";
        while(len != 0)
        {
            str += to_string(len % 2);
            len /= 2;
        }
        reverse(str.begin(), str.end());
        answer[0]++;
    }
    return answer;
}