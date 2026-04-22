using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long cost = 0;
    for(int i=1;i<=count;i++)
    {
        cost += price * i;
    }

    return (money < cost) ? (cost - money) : 0;
}