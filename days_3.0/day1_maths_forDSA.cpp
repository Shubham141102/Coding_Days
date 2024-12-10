1. count digits
https://www.geeksforgeeks.org/problems/count-digits5716/1
int evenlyDivides(int n) {
        int count =0;
        int rem = 0;
        int n1 = n;
        while(n>0)
        {
            rem = n%10;
            n = n/10;
            
            if( rem>0 && n1%rem == 0)
            {
                count++;
            }
            
            
        }
        return count;
    }

-------------------------------------------------------------------------------------------------------------
question 2 reverse a digit
https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        long sum = 0;
        int original = abs(x);
        
        while(original>0){
            rem = original%10;
            sum=sum*10+rem;
            original=original/10;
        }
        if (sum > INT_MAX  || sum < INT_MIN ) {
                return 0; // Return 0 if reversing x would cause overflow/underflow
            }
        if(x<0)
        {
            return sum * (-1);
        }
        return sum;
    }
};
--------------------------------------------------------------------------------------------
3 check palindrome
https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long original = x;
        long ans = 0;
        while(x>0)
        {
            int rem = x % 10;
            x=x/10;
            ans = ans*10 + rem;
        }
        if(ans == original)
            return true;
        return false;
    }
};
------------------------------------------------------
4. armstrong number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int original = n;
    while(n>0)
    {
        int rem = n%10;
        sum = sum + (rem * rem * rem);
        n = n/10;
    }
    if(sum == original)
    {
        cout<<"armstrong";
    }
    else
    cout<<"not a armstrong";
}