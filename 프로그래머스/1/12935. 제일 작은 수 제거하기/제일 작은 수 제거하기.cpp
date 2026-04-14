#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] != min)
            answer.push_back(arr[i]);
    }
    if(answer.empty())
        answer = {-1};
    return answer;
}