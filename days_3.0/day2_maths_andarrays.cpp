second largest

https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(maxi<arr[i])
            {
                maxi = arr[i];
            }
        }
        int sec = INT_MIN;
        for(int i = 0;i<n;i++)
        {
            if( sec<arr[i] && arr[i]<maxi)
            {
                sec = arr[i];
            }
        }
        return sec;
    }
};

----------------------------------------------------------------------------------------
single digit
https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums)
        {
            ans =ans^val;
        }
        return ans;
    }
};
------------------------------------------------------------------------------------------
remove duplicates
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j+1] = nums[i];
                j++;
            }
        }
        return j+1;
    }
};