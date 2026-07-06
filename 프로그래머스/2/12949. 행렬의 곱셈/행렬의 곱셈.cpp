#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> vec;
    for(int i=0;i<arr1.size();i++)
    {
        vec.clear();
        for(int j=0;j<arr2[0].size();j++)
        {
            int element = 0;
            for(int k=0;k<arr1[0].size();k++)
            {
                element += arr1[i][k] * arr2[k][j];
            }
            vec.push_back(element);
        }
        answer.push_back(vec);
    }
    return answer;
}