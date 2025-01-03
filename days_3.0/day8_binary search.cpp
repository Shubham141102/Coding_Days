koko eating bananas

using linear search 
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int sum = 0;
        int k=0;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]>maxi)
            {
                maxi = piles[i];
            }
        }
        
        for(int i=1;i<=maxi;i++)
        {
            sum =0;
            for(int j=0;j<piles.size();j++)
            {
                k = ceil((double)(piles[j])/(double)(i));
                sum = sum+k;
                
                
                
            }
            if (sum <= h) 
                     return i;
            
        }
        return mini;

    }
};