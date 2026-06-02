#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> vl;
    vector<int> vr(reserve);
    for(auto it_l = lost.begin(); it_l != lost.end(); it_l++)
    {
        auto it_r = find(vr.begin(),vr.end(),*it_l);
        if(it_r != vr.end())
        {
            vr.erase(it_r);
        }
        else
        {
            vl.push_back(*it_l);
        }
    }
    sort(vl.begin(),vl.end());
    sort(vr.begin(),vr.end());
    int answer = n - vl.size();
    for(auto it_l = vl.begin(); it_l != vl.end(); it_l++)
    {
        for(auto it_r = vr.begin(); it_r != vr.end(); it_r++)
        {
            if(abs(*it_l - *it_r) <= 1)
            {
                answer++;
                vr.erase(it_r);
                break;
            }
        }
    }
    return answer;
}