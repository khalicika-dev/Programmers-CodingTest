#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size());
    map<string, int> UserToIdx;
    map<int, set<int>> reported_byUser;
    
    for(int i=0;i<id_list.size();i++)
    {
        UserToIdx[id_list[i]] = i;
    }
    
    for(int i=0;i<report.size();i++)
    {
        string reporter = report[i].substr(0,report[i].find(" "));
        string reported = report[i].substr(report[i].find(" ") + 1, -1);
        reported_byUser[UserToIdx[reported]].insert(UserToIdx[reporter]);
    }
    
    for(auto UList : reported_byUser)
    {
        if(UList.second.size() >= k)
        {
            for(int idx : UList.second)
            {
                answer[idx]++;
            }
        }
    }
    
    return answer;
}