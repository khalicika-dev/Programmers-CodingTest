#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    deque<pair<int,int>> q;
    for(int i=0;i<priorities.size();i++)
    {
        q.push_back({i, priorities[i]});
    }
    
    do
    {
        int pmax = 0;
        for(auto it = q.begin(); it != q.end();it++)
        {
            if(it->second > pmax)
            {
                pmax = it->second;
            }
        }
        if(q.front().second == pmax)
        {
            answer++;
            if(q.front().first == location)
                break;
        }
        else
        {
            q.push_back({q.front().first, q.front().second});
        }
        q.pop_front();
    }while(!q.empty());
    return answer;
}