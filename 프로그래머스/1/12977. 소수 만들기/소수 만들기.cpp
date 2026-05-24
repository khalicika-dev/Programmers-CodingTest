#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                int sum = nums[i]+nums[j]+nums[k];
                bool check = true;
                for(int x = 2;x < sum;x++)
                {
                    if(sum%x == 0)
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                    answer++;
            }
        }
    }

    return answer;
}