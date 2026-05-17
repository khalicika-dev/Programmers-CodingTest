#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int result = (n/a) * b;
    if(n < a)
        return 0;
    return result + solution(a,b,result + n%a);
}