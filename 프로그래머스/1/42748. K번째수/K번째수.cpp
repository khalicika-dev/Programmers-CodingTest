#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int m = 0; m < commands.size(); m++)
    {
        vector<int> v = vector<int>();
        for(int i = commands[m][0] - 1; i <= commands[m][1] - 1;i++)
            v.push_back(array[i]);
        sort(v.begin(),v.end());
        answer.push_back(v[commands[m][2]-1]);
    }
    return answer;
}