#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if(s.length() != 4 && s.length() != 6)
        return false;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        if(*it < '0' || *it > '9')
        {
            return false;
            break;
        }
    }
    return true;
}