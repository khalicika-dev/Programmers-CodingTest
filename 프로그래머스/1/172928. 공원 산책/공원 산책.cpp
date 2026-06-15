#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    vector<vector<int>> map_park;
    int pos[2] = {0,0};
    for(int i=0;i<park.size();i++)
    {
        map_park.push_back(vector<int>());
        for(int j=0;j<park[i].length();j++)
        {
            if(park[i][j] == 'S')
            {
                pos[0] = i;
                pos[1] = j;
            }
            map_park[i].push_back(park[i][j] == 'X' ? 1 : 0);
        }
    }
    for(int i=0;i<routes.size();i++)
    {
        char dir = routes[i][0];
        int cnt = routes[i][2] - '0';
        int j;
        int temp[2] = {pos[0], pos[1]};
        for(j=0;j<cnt;j++)
        {
            switch(dir)
            {
                case 'N': temp[0]--; break;
                case 'S': temp[0]++; break;
                case 'W': temp[1]--; break;
                case 'E': temp[1]++; break;
            }
            if((temp[0] < 0 || temp[0] >= map_park.size()) ||
                temp[1] < 0 || temp[1] >= map_park[pos[0]].size() ||
                map_park[temp[0]][temp[1]] > 0)
                break;
        }
        if(j >= cnt)
        {
            pos[0] = temp[0];
            pos[1] = temp[1];
        }
    }
    answer.push_back(pos[0]);
    answer.push_back(pos[1]);
    return answer;
}