#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<string> wish;
    unordered_map<string, int> remain;
    unordered_map<string, int> cart;
    
    for(int i=0;i<want.size();i++)
    {
        for(int j=0;j<number[i];j++)
        {
            wish.push_back(want[i]);
        }
    }
    
    for(int i=0;i<want.size();i++)
    {
        cart[want[i]] = 0;
        remain[want[i]] = 0;
    }
    
    for(int i=0;i<discount.size();i++)
    {
        if(i>=10)
        {
            const int k = i-10;
            if(cart[discount[k]] > 0)
            {
                cart[discount[k]]--;
                if(remain[discount[k]] > 0)
                    remain[discount[k]]--;
                else
                    wish.push_back(discount[k]);
            }
        }
        
        
        if(find(want.begin(), want.end(), discount[i]) != want.end())
        {
            auto it = find(wish.begin(),wish.end(),discount[i]);
            if(it != wish.end())
                wish.erase(it);
            else
                remain[discount[i]]++;
            
            cart[discount[i]]++;
        }
        
        if(wish.empty())
        {
            answer++;
        }
    }
    return answer;
}