#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1;i <= number; i++)
    {
        int atk = 1;
        for(int j = 1;j <= i/2; j++)
        {
            if(i%j == 0)
            {
                atk++;
                if(atk > limit)
                {
                    atk = power;
                    break;
                }
            }
        }
        answer += atk;
    }
    return answer;
}