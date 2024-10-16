Question no 01 
167. Sort colours 
https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low= 0,mid=0,high = n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                int temp = nums[low];
                nums[low]= nums[mid];
                nums[mid]=temp;
                mid++;
                low++;

            }
            else if(nums[mid]==1)
            mid++;
            else{
                int temp = nums[high];
                nums[high]= nums[mid];
                nums[mid]=temp;
                
                high--;
            }
        }
    }
};

-------------------------------------------------------------------------------------------
Question no 02
majority element
https://leetcode.com/problems/majority-element/



class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 1;
       int look = nums[0];
       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]==look)
            {
                count++;
            }
            if(nums[i]!=look)
            {
                count --;
            }
            if(count ==0)
            {
                look = nums[i];
                count = 1;
            }
       }
       return look;

    }
};
----------------------------------------------------------------------------------
Question 3
kadane algorithm
https://leetcode.com/problems/maximum-subarray/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
            if(sum>maxi)
            {
                maxi = sum;
            }
            if(sum<0)
            {sum =0;}
        }
        return maxi;
    }
};
----------------------------------------------------------------------------------

