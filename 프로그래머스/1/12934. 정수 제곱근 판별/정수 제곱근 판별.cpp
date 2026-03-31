#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

long long solution(long long n) {
    for(long long x=1;x<=sqrt(n);x++)
    {
        if(x == sqrt(n))
            return pow(x+1,2);
    }
    return -1;
}