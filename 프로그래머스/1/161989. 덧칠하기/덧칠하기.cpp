#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int range = 0;
    for(int i=0;i<section.size();i++)
    {
        if(section[i] <= range)
            continue;
        
        range = section[i] + m-1;
        answer++;
    }
    return answer;
}