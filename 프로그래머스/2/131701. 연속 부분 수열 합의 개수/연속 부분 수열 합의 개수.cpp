#include <string>
#include <vector>
#include <set>

using namespace std;

int fitIndex(int idx, const int size)
{
    while(idx >= size)
    {
        idx -= size;
    }
    return idx;
}

int solution(vector<int> elements) {
    set<int> sum;
    for(int len=1;len<=elements.size();len++)
    {
        int currentSum = 0;
        for(int n=0;n<len;n++)
        {
            currentSum += elements[n];
        }
        sum.insert(currentSum);

        for(int i=0;i<elements.size()-1;i++)
        {
            currentSum -= elements[fitIndex(i, elements.size())];
            currentSum += elements[fitIndex(i+len, elements.size())];
            sum.insert(currentSum);
        }
        
    }
    return sum.size();
}