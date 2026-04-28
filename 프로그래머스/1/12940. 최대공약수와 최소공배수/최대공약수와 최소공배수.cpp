#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    int min = (n>m) ? m : n;
    int gcd = 1;
    int lcm = 1;
    for(int i = 2; i<=min;i++)
    {
        if(n%i == 0 && m%i == 0)
            gcd = i;
    }
    for(int i=1;i<=n*m;i++)
    {
        if(i%n == 0 && i%m == 0)
        {
            lcm = i;
            break;
        }
    }
    return {gcd,lcm};
}