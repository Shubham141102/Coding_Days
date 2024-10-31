question no 01
binary search
https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int n= nums.size();
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            
            else if(nums[mid]>target)
                {
                    high = mid-1;
                }
                
            else{
                low = mid+1;
            }

            
        }
        return -1;
    }
};
------------------------------------------------------------
question 02
lower bound


// } Driver Code Ends
class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(k==arr[mid])
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
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends

-----------------------------------------------------------
question no 3
floor and ceil
https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor

 int min=Integer.MIN_VALUE;
        int max=Integer.MAX_VALUE;
        int ceil=-1;
        int floor=-1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>min&&arr[i]<=x)
            {
                min=arr[i];
                floor=min;
            }
            if(arr[i]<max&&arr[i]>=x)
            {
                max=arr[i];
                ceil=max;
            }
        }
        return new int [] {floor,ceil};

        ----------------------------------------------------
question 04
search inserted position
https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high)
        {
            int mid = low+ (high-low)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;

            }
            else
                low = mid+1;
        }
        return low;
    }
};
-----------------------------------------------------------

question 05
floor and ceil in sorted array
https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	long long low=0;
        
        long long  high = n-1;
		pair<int,int>ans;
        while(low<=high)
        {
            long long mid = low + (high-low)/2;
            if(a[mid] == x)
            {
                ans.first =x;
				ans.second = x;
				return ans;
            }
            
            else if(a[mid]>x)
                {
                    high = mid-1;
                }
                
            else{
                low = mid+1;
            }
        }
        if(x<a[0])
        {
            ans.first = -1;
			ans.second = a[0];
			return ans;
        }
		if(x>a[n-1])
        {
            ans.first = a[n-1];
			ans.second =-1 ;
			return ans;
        }
        
        ans.first = a[high];
		ans.second = a[low];
        return ans;	
}