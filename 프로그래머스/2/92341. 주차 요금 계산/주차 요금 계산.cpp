#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> car;
    unordered_map<string, int> park;
    for(int i=0;i<records.size();i++)
    {
        string str;
        int idx = 0;
        int time = 0;
        str = records[i].substr(idx, records[i].find(" ", idx) - idx);
        idx = records[i].find(" ", idx)+1;
        //시간
        time += 60 * stoi(str.substr(0,2));
        time += stoi(str.substr(3,2));
        
        str = records[i].substr(idx, records[i].find(" ", idx) - idx);
        idx = records[i].find(" ", idx)+1;
        //번호
        if(park.contains(str))
        {
            int dur = time - park[str];
            park.erase(str);
            car.insert({str,0});
            car[str] += dur;
        }
        else
        {
            park.insert({str, time});
        }
    }
    for(auto it = park.begin();it!=park.end();it++)
    {
        car[it->first] += (60*23+59) - it->second;
    }
    for(auto it = car.begin();it != car.end(); it++)
    {
        int result = fees[1];
        if(it->second > fees[0])
        {
            result += fees[3] * ceil(((float)it->second - (float)fees[0]) / (float)fees[2]);
        }
        answer.push_back(result);
    }
    return answer;
}