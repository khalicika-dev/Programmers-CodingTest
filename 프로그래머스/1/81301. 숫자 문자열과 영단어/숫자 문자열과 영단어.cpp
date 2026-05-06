#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    const vector<string> v = 
        {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i< v.size(); i++)
    {
        while(true)
        {
            int idx = s.find(v[i]);
            if(idx == string::npos)
                    break;
            s.replace(idx, v[i].length(), to_string(i));
        }
    }
    answer = stoi(s);
    return answer;
}