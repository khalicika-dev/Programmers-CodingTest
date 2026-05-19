#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int TotalDay = 0;
    int DaysOfWeek;
    for(int i=0;i<a;i++)
    {
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                TotalDay += 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                TotalDay += 30;
                break;
            case 2:
                TotalDay += 29;
                break;
        }
    }
    TotalDay += b;
    DaysOfWeek = TotalDay % 7;
    switch(DaysOfWeek)
    {
        case 0: return "THU"; break;
        case 1: return "FRI"; break;
        case 2: return "SAT"; break;
        case 3: return "SUN"; break;
        case 4: return "MON"; break;
        case 5: return "TUE"; break;
        case 6: return "WED"; break;
    }
    return "Error";
}