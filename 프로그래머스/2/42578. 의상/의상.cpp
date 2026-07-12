#include <string>
#include <vector>
#include <map>

using namespace std;

/*
int wear_subset(const map<string, vector<string>>& closet, int count, 
                map<string,vector<string>>::iterator it)
{
    int answer = 0;
    if (count == closet.size())
    {
        return it->second.size()+1;
    }

    auto it_next = it;
    it_next++;
    for (int i = 0; i < it->second.size(); i++)
    {
        answer += wear_subset(closet, count + 1, it_next);
    }

    answer += wear_subset(closet, count + 1, it_next);
    return answer;
}
*/

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    map<string, vector<string>> closet;
    for (int i = 0; i < clothes.size(); i++)
    {
        closet[clothes[i][1]].push_back(clothes[i][0]);
    }
    
    for(auto c : closet)
    {
        answer *= c.second.size() +1;
    }
    return answer-1;
    //map<string, vector<string>>::iterator it = closet.begin();
    //return wear_subset(closet, 1, it)-1;
}