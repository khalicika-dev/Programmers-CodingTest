#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void dungeon(int energy, vector<vector<int>>& dungeons, vector<int> remainIdx, int& max)
{
    for(int idx : remainIdx)
    {
        if(energy >= dungeons[idx][0])
        {
            vector<int> nextRemain(remainIdx);
            nextRemain.erase(find(nextRemain.begin(), nextRemain.end(), idx));
            dungeon(energy-dungeons[idx][1],dungeons, nextRemain, max);
        }
    }
    if(dungeons.size() - remainIdx.size() > max)
    {
        max = dungeons.size() - remainIdx.size();
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    vector<int> remain;
    for(int i=0;i<dungeons.size();i++)
    {
        remain.push_back(i);
    }
    dungeon(k, dungeons, remain, answer);
    
    return answer;
}