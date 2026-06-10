#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lux = -1;
    int luy = wallpaper[0].length();
    int rdx = -1;
    int rdy = -1;
    for(int i=0;i<wallpaper.size();i++)
    {
        int y1 = wallpaper[i].find('#');
        if(y1 != string::npos)
        {
            if(lux < 0)
                lux = i;
            if(luy > y1)
                luy = y1;
            
            if(i > rdx)
                rdx = i;
        }
        int y2 = wallpaper[i].find_last_of('#');
        if(rdy < y2)
            rdy = y2;
    }
    return {lux, luy, rdx + 1, rdy + 1};
}