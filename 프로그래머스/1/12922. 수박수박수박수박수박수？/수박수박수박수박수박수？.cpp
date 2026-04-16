#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    bool su = true;
    for(int i=0;i<n;i++)
    {
        answer.append(su ? "수" : "박");
        su = !su;
    }
    return answer;
}