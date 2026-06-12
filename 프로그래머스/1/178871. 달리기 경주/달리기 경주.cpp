#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> positions;
    for(int i=0;i<players.size();i++)
    {
        positions[players[i]] = i;
    }
    for(int i=0;i<callings.size();i++)
    {
        string playerA,playerB;
        playerA = callings[i];
        playerB = players[positions[callings[i]]-1];
        swap(players[positions[playerA]], players[positions[playerB]]);
        swap(positions[playerA], positions[playerB]);
    }
    return players;
}