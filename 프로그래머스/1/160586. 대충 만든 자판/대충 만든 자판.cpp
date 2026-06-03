#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(int i=0;i<targets.size();i++)
    {
        int total_cnt = 0;
        for(char c: targets[i])
        {
            int min = 100;
            bool bValid = false;
            for(string s : keymap)
            {
                int cnt = s.find(c);
                if(cnt != string::npos)
                {
                    bValid = true;
                    if(cnt < min)
                        min = cnt;
                }
            }
            if(bValid)
            {
                total_cnt += min + 1;
            }
            else
            {
                total_cnt = 0;
                break;
            }
        }
        if(total_cnt <= 0)
            total_cnt = -1;
        answer.push_back(total_cnt);
    }
    return answer;
}