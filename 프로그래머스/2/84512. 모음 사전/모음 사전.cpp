#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string word) {
    string str = "";
    vector<char> v = {'A','E','I','O','U'};
    int n = 0;
    for(int x1=0;x1<v.size();x1++)
    {
        n++;
        str = v[x1];
        if(str == word)
            return n;
        
        for(int x2=0;x2<v.size();x2++)
        {
            n++;
            str = v[x1];
            str += v[x2];
            if(str == word)
                return n;
            
            for(int x3=0;x3<v.size();x3++)
            {
                n++;
                str = v[x1];
                str += v[x2];
                str += v[x3];
                if(str == word)
                    return n;
                
                for(int x4=0;x4<v.size();x4++)
                {
                    n++;
                    str = v[x1];
                    str += v[x2];
                    str += v[x3];
                    str += v[x4];
                    if(str == word)
                        return n;
                    
                    for(int x5=0;x5<v.size();x5++)
                    {
                        n++;
                        str = v[x1];
                        str += v[x2];
                        str += v[x3];
                        str += v[x4];
                        str += v[x5];
                        if(str == word)
                            return n;
                    }
                }
            }
        }
    }
    return -1;
}