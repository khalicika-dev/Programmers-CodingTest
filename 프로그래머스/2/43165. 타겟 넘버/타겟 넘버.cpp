#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int rec(vector<int>& numbers, int idx, int sum, int target)
{
    int ans = 0;
    
    if(idx >= numbers.size())
    {
        return sum == target ? 1 : 0;
    }
    
    ans += rec(numbers, idx+1, sum+numbers[idx], target);
    ans += rec(numbers, idx+1, sum-numbers[idx], target);
    return ans;
}

int solution(vector<int> numbers, int target) {
    sort(numbers.begin(), numbers.end());
    return rec(numbers, 0, 0, target);
}