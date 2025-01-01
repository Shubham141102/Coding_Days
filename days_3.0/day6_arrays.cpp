finding kth max and kth min

https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends

------------------------------------------------------------------------------------------
binary search
https://leetcode.com/problems/binary-search/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ;
        int high = nums.size()-1;
        while(low<=high)
        {
            int mid = (high - low)/2+low;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return -1;
    }
};
-------------------------------------------------------------------------------
lower bound
https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array
long low = 0 ;
        long high = arr.size()-1;
        while(low<=high)
        {
            long mid = (high - low)/2+low;
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]>k)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return high;