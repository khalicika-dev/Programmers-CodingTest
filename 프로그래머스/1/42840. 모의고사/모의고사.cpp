#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> way({{1,2,3,4,5},{2,1,2,3,2,4,2,5},{3,3,1,1,2,2,4,4,5,5}});
    vector<int> correct({0,0,0});
    int max = 0;
    for(int i=0;i<answers.size();i++)
    {
        for(int j=0;j<way.size();j++)
        {
            if(answers[i] == way[j][i%way[j].size()])
            {
                correct[j]++;
                if(correct[j] > max)
                    max = correct[j];
            }
        }
    }
    for(int i=0;i<correct.size();i++)
    {
        if(correct[i] == max)
            answer.push_back(i+1);
    }
    
    return answer;
}