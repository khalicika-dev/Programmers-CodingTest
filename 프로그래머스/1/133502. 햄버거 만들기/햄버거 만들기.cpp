#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    vector<int> v;
    int answer = 0;
    for(int i=0;i<ingredient.size();i++)
    {
        v.push_back(ingredient[i]);
        if(v.size() >= 4 &&
          v[v.size()-1] == 1 &&
          v[v.size()-2] == 3 &&
          v[v.size()-3] == 2 &&
          v[v.size()-4] == 1)
        {
            answer++;
            v.pop_back();
            v.pop_back();
            v.pop_back();
            v.pop_back();
        }
    }
    return answer;
}