#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    sort(X.begin(),X.end(),greater<char>());
    sort(Y.begin(),Y.end(),greater<char>());
    bool bZero = true;
    int jstart=0;
    for(int i=0;i<X.length();i++)
    {
        int j=jstart;
        while(j<Y.length() && X[i] <= Y[j])
        {
            if(X[i] == Y[j])
            {
                if(bZero && X[i] != '0')
                    bZero = false;
                answer += X[i];
                jstart = j+1;
                break;
            }
            j++;
        }
    }
    if(answer.empty())
        answer = "-1";
    else if(bZero)
        answer = "0";
    return answer;
}