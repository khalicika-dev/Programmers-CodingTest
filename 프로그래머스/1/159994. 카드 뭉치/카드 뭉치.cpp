#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i=0;
    int j=0;
    for(auto it = goal.begin(); it != goal.end(); it++)
    {
        if(i < cards1.size() && cards1[i] == *it)
            i++;
        else if(j < cards2.size() && cards2[j] == *it)
            j++;
        else
            return "No";
    }
    return "Yes";
}