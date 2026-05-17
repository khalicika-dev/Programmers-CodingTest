#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string temp;
    string answer = "";
    for(int i=1;i<food.size();i++)
    {
        for(int j=0;j<food[i]/2;j++)
            answer += to_string(i);
    }
    temp = answer;
    answer += '0';
    for(auto it = temp.rbegin();it!=temp.rend();it++)
    {
        answer += *it;
    }
    return answer;
}