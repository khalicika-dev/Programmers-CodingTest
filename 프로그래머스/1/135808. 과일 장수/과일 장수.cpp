#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int cnt = 0;
    sort(score.begin(), score.end(), [](int a, int b){return a > b;});
    for(int i = 0; i<score.size(); i++)
    {
        cnt++;
        if(cnt >= m)
        {
            answer += cnt * score[i];
            cnt = 0;
        }
    }
    return answer;
}