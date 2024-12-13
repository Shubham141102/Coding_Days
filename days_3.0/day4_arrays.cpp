// move all zeroes to one side
// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr = {5, 11, -13, -5, 6, -7, -12, -3, 11 };

    int low = 0;
    int high = arr.size()-1;
    while(low<high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        
        if(arr[high]>=0)
        {
            high--;
        }
        if(arr[low]>0 && arr[high]<0)
        {
            int temp = arr[low];
            arr[low]= arr[high];
            arr[high]=temp;
            low++;
            high--;
        }
        for (int e : arr)
       cout<<e << " ";
       cout<<endl;
    }

    for (int e : arr)
       cout<<e << " ";
}
------------------------------------------------------
rotate array by one
https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int size = arr.size();
        int last = arr[size-1];
        for(int i=size-1;i>0;i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0]=last;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.rotate(arr);
        for (long long i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends

-----------------------------------------------------
kadanes algorithm
https://leetcode.com/problems/maximum-subarray/description/
int n = arr.size();
        int sum = 0;
        int max_sum = 0;
        for(int i=0;i<n;i++)
        {
            sum = sum +arr[i];
            max_sum = max(max_sum,sum);
            if(sum<0)
            {
                sum = 0;
            }
        }
        return max_sum;

-------------------------------------------------------
leaders in an array
https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
       vector<int> ans;
  int n = arr.size();

 int maxi = arr[n - 1];
 ans.push_back(arr[n-1]);

  
  for (int i = n - 2; i >= 0; i--)
    if (arr[i] >= maxi) {
      ans.push_back(arr[i]);
      maxi = arr[i];
    }
    reverse(ans.begin(),ans.end());

  
  return ans;
    }
};
-----------------------------------------------------
minimise the height
https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int result = arr[n - 1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        for (int i = 0; i < n - 1; i++) {
            int minHeight = min(smallest, arr[i + 1] - k);
            int maxHeight = max(largest, arr[i] + k);
            
            // If the new height is negative, skip to avoid invalid cases
            if (minHeight < 0) continue;

            // Update the result with the minimum possible difference
            result = min(result, maxHeight - minHeight);
        }
        return result;
    }
};

--------------------------------------------
stock prices
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                m = max(prices[j]-prices[i],m);
            }
        }
        return m;
    }
};


optimal->
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