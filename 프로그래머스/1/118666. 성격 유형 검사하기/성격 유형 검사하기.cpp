#include <string>
#include <vector>
#include <map>

using namespace std;

char compare(char a, char b, map<char,int> scores)
{
    if(scores[a] == scores[b])
        return a < b ? a : b;
    return scores[a] > scores[b] ? a : b;
}

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char,int> scores;
    for(int i = 0; i<survey.size();i++)
    {
        int s = choices[i] - 4;
        if(s == 0)
        {
            continue;
        }
        int agree = s > 0 ? 1 : 0;
        scores[survey[i][agree]] += abs(s);
    }
    answer += compare('R','T',scores);
    answer += compare('C','F',scores);
    answer += compare('J','M',scores);
    answer += compare('A','N',scores);
    return answer;
}