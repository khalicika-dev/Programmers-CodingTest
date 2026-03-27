#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    for(auto it = str.rbegin();it!=str.rend();it++)
    {
        answer.push_back(*it - '0'); // 0을빼면 문자 안 숫자가 변형없이 int가 된다.
    }
    return answer;
}