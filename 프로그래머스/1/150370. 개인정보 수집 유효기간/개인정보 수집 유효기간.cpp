#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int calculate_days(string date)
{
    int idx=0;
    int days=0;
    
    days += stoi(date.substr(idx,date.find(".",idx))) * 12 * 28;
    idx = date.find(".",idx)+1;
    
    days += stoi(date.substr(idx,date.find(".",idx))) * 28;
    idx = date.find(".",idx)+1;
    
    days += stoi(date.substr(idx,date.find(".",idx)));
    idx = date.find(".",idx)+1;
    
    return days;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    for(int i=0; i<privacies.size(); i++)
    {
        int days = calculate_days(privacies[i].substr(0, privacies[i].find(" ")));
        string category = privacies[i].substr(privacies[i].find(" ") + 1, -1);
        for(int j=0; j<terms.size(); j++)
        {
            if(terms[j].substr(0, terms[j].find(" ")) == category)
            {
                int period = stoi(terms[j].substr(terms[j].find(" ") + 1, -1)) * 28;
                if(calculate_days(today) - days >= period)
                {
                    answer.push_back(i+1);
                }
            }
        }
    }
    return answer;
}