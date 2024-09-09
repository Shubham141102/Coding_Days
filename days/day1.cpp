// 204. Count Primes
// optimal code
class Solution {
public:
    int countPrimes(int n) {
        if(n==0   || n==1 || n==2)
        return 0;
        vector<int> arr(n+1,1);
        for(int i=2;i*i<=n;i++)
        {
            if(arr[i]==1)
            {
                for(int j=i*i;j<=n;j=j+i)
                {
                    arr[j]=0;
                }
            }
        }
        int count = 0;
        for(int i=2;i<n;i++)
        {
            if(arr[i]==1)
            count++;
        }
        return count;
    }
};
// -----------------------------------------------------------------------------------
// 238. Product of Array Except Self
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.
 
// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]



// gives TLE
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int product = 1;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else{
                    product = nums[j]*product;
                }

            }
            ans.push_back(product);
        }
        return ans;
    }
};

// ------------------------------------------------------------------------------
// optimal
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        left[0]=1;
        right[nums.size()-1]=1;

        for(int i =1;i<nums.size();i++)
        {
            left[i] = left[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            right[i] = right[i+1]*nums[i+1];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int product =left[i]*right[i] ;
            ans.push_back(product);
        }
            
        return ans;
    }
// };==================================================================================
// 9. Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long r;
        long long sum = 0;
        long long temp =x;
        while(temp!=0)
        {
            r=temp%10;
            sum = sum*10 +r;
            temp=temp/10;
            
        }
        
        
        return (sum == x);
    }
};
// ------------------------------------------------------------------------------
// Power of 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n==0)
            return false;
       int array[31];
       int value=1;
       for(int i=0;i<=29;i=i+1)
       {
        array[i]=value*2;
        value = value*2;
       }

       for(int i=0;i<=30;i++)
       {
        if(array[i]==n)
        {
            return true;
        }
       }
       return false;
    }
};