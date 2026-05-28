#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int bruh = 0;
    int correct = 0;
    for(int i=0; i<lottos.size();i++)
    {
        if(lottos[i] == 0)
            bruh++;
        else
        {
            for(int j=0;j<win_nums.size();j++)
            {
                if(lottos[i] == win_nums[j])
                    correct++;
            }
        }
    }
    return {min(7 - correct-bruh,6), min(7 - correct,6)};
}