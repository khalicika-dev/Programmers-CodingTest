#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int check = 0;
    while(check < arr.size())
    {
        answer++;
        check = 0;
        for(int val : arr)
        {
            if(answer % val == 0)
            {
                check++;
            }
        }
    }
    return answer;
}