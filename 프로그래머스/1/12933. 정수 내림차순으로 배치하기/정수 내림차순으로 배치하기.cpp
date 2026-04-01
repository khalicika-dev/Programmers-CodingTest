#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n);
    sort(str.begin(),str.end(),[](char a, char b)
             {
                 return (a-'0') > (b-'0');
             });
    answer = stoll(str);
    return answer;
}