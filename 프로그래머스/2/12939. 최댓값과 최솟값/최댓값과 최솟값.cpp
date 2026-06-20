#include <string>
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

string solution(string s) {
    int min = INT_MAX;
    int max = -INT_MAX;
    int idx = 0;
    while(true)
    {
        string str = s.substr(idx, s.find(" ", idx) - idx);
        int n = stoi(str);
        if(n > max)
        {
            max = n;
        }
        if(n < min)
        {
            min = n;
        }
        idx = s.find(" ", idx);
        cout << str << endl;
        if(idx == string::npos)
        {
            break;
        }
        else
        {
            idx++;
        }
    }
    return to_string(min) + " " + to_string(max);
}