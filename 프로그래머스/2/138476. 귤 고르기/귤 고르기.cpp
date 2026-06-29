#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 10000000;
    int a,b;
    set<int> diff;
    map<int,int> m;
    vector<pair<int,int>> mtov;
    vector<int> v;
    
    for(int i=0;i<tangerine.size();i++)
    {
        m[tangerine[i]]++;
    }
    mtov = vector<pair<int,int>>(m.begin(),m.end());
    sort(mtov.begin(),mtov.end(),[](pair<int,int> a, pair<int,int> b)
         {
            return a.second > b.second; 
         });
    for(int i=0;i<mtov.size();i++)
    {
        for(int j=0;j<mtov[i].second;j++)
        {
            v.push_back(mtov[i].first);
        }
    }
    
    for(int i=0;i<k;i++)
    {
        if(i==0)
        {
            a = v[0];
        }
        b = v[i];
        diff.insert(v[i]);
    }
    answer = diff.size();
    
    for(int i=k;i<v.size();i++)
    {
        if(a != v[i-k+1])
        {
            diff.erase(a);
            a = v[i-k+1];
            diff.insert(a);
        }
        if(b != v[i])
        {
            b = v[i];
            diff.insert(b);
        }
        if(answer > diff.size())
        {
            answer = diff.size();
        }
    }
    return answer;
}