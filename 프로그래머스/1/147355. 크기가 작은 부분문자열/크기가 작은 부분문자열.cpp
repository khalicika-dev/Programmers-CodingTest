#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long pnum = stol(p);
    for(int i = 0;i<=t.size() - p.size();i++)
    {
        long long a = stol(t.substr(i,p.size()));
        if(pnum >= a)
            answer++;
    }
    return answer;
}