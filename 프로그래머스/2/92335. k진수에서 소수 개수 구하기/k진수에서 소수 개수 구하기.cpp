#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool prime(long long num)
{
    if(num <= 1)
    {
        return false;
    }
    for(long long i=2;i<=sqrt(num);i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    long long num = 0;
    long long digit = 1;
    while(n != 0)
    {
        if(n%k == 0)
        {
            if(prime(num))
                answer++;
            digit = 1;
            num = 0;
        }
        else
        {
            num += (n%k) * digit;
            digit*=10;
        }
        n/=k;
    }
    if(prime(num))
        answer++;
    return answer;
}