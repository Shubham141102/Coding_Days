Question no 01 
977. Squares of a Sorted Array
 https://leetcode.com/problems/squares-of-a-sorted-array/description/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<nums.size();i++)
        {
            ans[i] = nums[i] * nums[i];
        }
        // for(int i=0;i<ans.size()-1;i++)
        // {
        //     for(int j=i+1;j<ans.size();j++)
        //     {
        //         if(ans[j]<ans[i])
        //         {
        //             int temp = ans[i];
        //             ans[i]=ans[j];
        //             ans[j]=temp;
        //         }
        //     }
        // }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

-------------------------------------------------------------------------------------------
