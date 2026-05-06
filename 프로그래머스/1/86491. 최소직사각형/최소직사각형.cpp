#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxw = 0;
    int maxh = 0;
    for(auto it = sizes.begin();it!=sizes.end();it++)
    {
        int m = max((*it)[0],(*it)[1]);
        int n = min((*it)[0],(*it)[1]);
        if(maxw < m)
            maxw = m;
        if(maxh < n)
            maxh = n;
    }
    return maxw * maxh;
}