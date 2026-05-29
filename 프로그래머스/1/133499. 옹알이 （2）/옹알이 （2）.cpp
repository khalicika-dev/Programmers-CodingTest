#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> v({"aya", "ye", "woo", "ma"});
    int answer = 0;
    for(string it : babbling)
    {
        int sel = -1;
        int idx = 0;
        int i = 0;
        while(i < v.size())
        {
            if(sel != i && idx == it.find(v[i],idx))
            {
                idx += v[i].length();
                if(idx >= it.length())
                {
                    answer++;
                    break;
                }
                sel = i;
                i = 0;
                continue;
            }
            else
                i++;
        }
    }
    return answer;
}