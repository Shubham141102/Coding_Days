move zeroes tp the enf
https://leetcode.com/problems/move-zeroes/
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
-----------------------------------------------------------------------------------------------
merging of two __ARRAY_OPERATORS
https://www.naukri.com/code360/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n= a.size() ,m = b.size();
        int i =0 , j=0;
        vector<int> union1;
        while(i < n && j<m){
            if(a[i] <= b[j]){
                if(union1.size() == 0 || union1.back()!= a[i]){
                    union1.push_back(a[i]);
                   
                }
                i++;
            }
            else{
                if(union1.size() == 0 || union1.back()!= b[j]){
                     union1.push_back(b[j]);
                    
                }
                j++;
                
                
            }
        }
        
        while(i<n){
            if(union1.back()!= a[i]){
                 union1.push_back(a[i]);
                    
            }
            i++;
        }
        
        while(j < m){
            if(union1.back()!= b[j]){
                union1.push_back(b[j]);
                    
            }  
            j++;
        }
        return union1;
}
-------------------------------------------------------------------
maximum ones
https://leetcode.com/problems/max-consecutive-ones/description/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            if(nums[i]!=1)
            {
                count=0;
            }
            maxi = max(count,maxi);
        }
        return maxi;
    }
};
---------------------------------------------------------------------------------------
missing number
https://leetcode.com/problems/missing-number/submissions/1476780717/
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
longest subarray with sum k
https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n = arr.size();
       int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        int s = 0;
        for (int j = i; j < n; j++) { // ending index
            // add the current element to
            // the subarray a[i...j-1]:
            s += arr[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends

-----------------------------------------------------------------------------------------------------
sort colours
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

----------------------------------------------------------------------------
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