#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int total_clear = 0;
    bool check = true;
    do
    {
        int clear = 0;
        check = true;
        for(int i=0;i<progresses.size();i++)
        {
            progresses[i] += speeds[i];
            if(progresses[i] < 100)
            {
                check = false;
            }
            else if(check)
            {
                progresses[i] = 100;
                clear++;
            }
        }
        if(clear > total_clear)
        {
            answer.push_back(clear - total_clear);
            total_clear = clear;
        }
    }while(!check);
    
    
    return answer;
}