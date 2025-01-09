power of x
https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {
        long bf = n;
        if(n<0)
        {
            x=1/x;
            bf = -bf;
        }
        double ans = 1;
        while(bf>0)
        {
            if(bf%2==1)
            {
                ans = ans *x;
            }
            x=x*x;
            bf = bf/2;
        }
        
        return ans;
    }
};

----------------------------------------------------------------------------------------------------------
Stocks

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minsofar = prices[0];
        for(int i=0;i<n;i++)
        {
            minsofar = min(minsofar,prices[i]);
            maxprofit = max(maxprofit,prices[i]-minsofar);
        }
        return maxprofit;
    }
};