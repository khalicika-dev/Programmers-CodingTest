#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int maxcit = 0;
    
    for(int c=0;c<=citations.size();c++)
    {
        int greaterCnt = 0; // 이상 논문갯수
        for(int i=0;i<citations.size();i++)
        {
            if(c <= citations[i])
            {
                greaterCnt++;
            }
        }
        
        if(greaterCnt >= c && answer < c)
        {
            answer = c;
        }
    }
    
    return answer;
}