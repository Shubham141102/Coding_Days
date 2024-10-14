Question no 01 
167. Two Sum 
https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>arr;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }
};

-------------------------------------------------------------------------------------------

Question no 02 <----Two pointer approach---->
167. Two Sum II - Input Array Is Sorted
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        vector<int> ans;
        int j = numbers.size()-1;
        while (i<=j)
        {
            if(numbers[i]+numbers[j]<target)
                i++;
            if(numbers[i]+numbers[j]==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            if(numbers[i]+numbers[j]>target)
                j--;
        }
        return ans;

    }
};
-------------------------------------------------------------------------------------------

Question no 03
largest element
https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM


int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
-------------------------------------------------------------------------------------------
Question no 04
second largest element
https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int>ans;
     int maxi= INT_MIN;
    int mini = INT_MAX;  
        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]>maxi)
            {
                maxi = a[i];
            }
        }
        int second = -1;
        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]<maxi && a[i]>second )
            {
                second = a[i];
            }
        }


        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]<mini)
            {
                mini = a[i];
            }
        }
        int second_min = INT_MAX;
        for(int i=0;i<=a.size()-1;i++)
        {
            if(a[i]>mini && a[i]<second_min )
            {
                second_min = a[i];
            }
        }    
        ans.push_back(second);
        ans.push_back(second_min);
          
        return ans;
}

-------------------------------------------------------------------------------------------
Question no 05
check if array is sorted
https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse

int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
-------------------------------------------------------------------------------------------
Question no 06
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
-------------------------------------------------------------------------------------------
Question no 07
rotate array 
https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k = k%n;
        int temp[n];
        int j=0;
        for(int i = n-k;i<n;i++)
        {
            temp[j]=nums[i];
            j++;
        }

        for(int i=n-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }
    }
};
-------------------------------------------------------------------------------------------
