#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    reverse(s.begin(),s.end());
    for(int i = s.size()-1; i>= 0; i--)
    {
        //ananab
        int idx = s.find(s[i],i+1);
        if(idx != string::npos)
            answer.push_back(idx-i);
        else
            answer.push_back(-1);
    }
    return answer;
}