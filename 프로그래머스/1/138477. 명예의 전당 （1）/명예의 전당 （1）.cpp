#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    multiset<int, less<int>> fame;
    for(int i=0;i<score.size();i++)
    {
        fame.insert(score[i]);
        if(fame.size() > k)
            fame.erase(fame.begin());
        answer.push_back(*fame.begin());
    }
    return answer;
}