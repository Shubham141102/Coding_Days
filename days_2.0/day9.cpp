question 01
square root using binary search 
two methods
one is linear search and the other one is binary search

linear search :
 class Solution {
  public:
    long long int floorSqrt(long long int n) {
        
        long long int i=0;
        while(i*i<=n)
        {
            if(i*i==n)
            {
                return i;
            }
            i=i+1;
        }
        return i-1;
    }
};


binary search
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        
       long long int low = 0;
       long long int high = n;
       while(low <= high)
       {
           long long int mid = low + (high-low)/2;
           if(mid * mid == n)
           return mid;
           else if(mid*mid<n)
           {
               low = mid+1;
           }
           else 
                high = mid-1;
       }
       return high;
    }
};
-----------------------------------------------------------------------------------
