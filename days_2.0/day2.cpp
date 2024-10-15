Question no 01
 move zeroes to end
 https://leetcode.com/problems/move-zeroes/submissions/1373244015/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int j=-1;
       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }
        for(int i=j+1;i<nums.size()-1;i++)
        {
            if(nums[i]!=0)
            {
                int temp = nums[i];
                nums[i]= nums[j];
                nums[j]=temp;
                j++;
            }
        }

    }
};
-------------------------------------------------------------------------------------------
Question no 02
find missing number
https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
       int sum = N*(N+1)/2;
    int sum2=0;
    for(int i=0;i<N;i++)
    {
        sum2=nums[i]+sum2;
    }
    return sum-sum2;

    }
};
-------------------------------------------------------------------------------------------
