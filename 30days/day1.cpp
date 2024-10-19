question 01
solve me first - https://www.hackerrank.com/challenges/solve-me-first/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b) {
    return a+b;
 
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    return 0;
}
-------------------------------------------------------------------------------------
question 02
araay sum -https://www.hackerrank.com/challenges/simple-array-sum/problem

int simpleArraySum(int ar_count, int* ar) {
    int sum=0;
    for(int i=0;i<ar_count;i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}
}
---------------------------------------------------------------------------------
question 03
compare the triplets
https://www.hackerrank.com/challenges/compare-the-triplets/problem


vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> ans(2,0);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
        {
            ans[0]++;
        }
       if(a[i]<b[i]) {
        ans[1]++;
        }
    }
    return ans;
}
-----------------------------------------------------------------------------------
question 04
very long sum - https://www.hackerrank.com/challenges/a-very-big-sum/problem 
long aVeryBigSum(vector<long> ar) {
    long long sum = 0;
    for(int i=0;i<ar.size();i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}
-----------------------------------------------------------------------------------
question 05
diagonal difference
https://www.hackerrank.com/challenges/diagonal-difference/problem
int diagonalDifference(vector<vector<int>> arr) {
         int sump= 0, sums=0;
    int n=arr.size();
    for(int i=0; i<n; i++) 
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sump=sump+arr[i][j];
            }
            if(i+j==n-1)
            {
                sums=sums+arr[i][j];
            }
        }
    }  
 
   cout<<sump<<" "<<sums;
 
   return abs(sump-sums);
}
-------------------------------------------------------------------------------
plus minus problem
https://www.hackerrank.com/challenges/plus-minus/problem





-----------------------------------------------------------------------------------
staircase 
https://www.hackerrank.com/challenges/staircase/problem
void staircase(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=n-i+1;j<=n;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}
------------------------------------------------------------------------------------
mini maxi problem
https://www.hackerrank.com/challenges/mini-max-sum/problem
void miniMaxSum(vector<int> arr) {
    long mini = INT_MAX;
    long maxi = INT_MIN;
    long sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum = sum+arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    
    cout<<sum-maxi<<" "<<sum-mini;
}
--------------------------------------------------------------------------------
Birthday Cake Candles

int birthdayCakeCandles(vector<int> candles) {
   
    
    long maxi = INT_MIN;
    
    for(int i=0;i<candles.size();i++)
    {
        if(candles[i]>maxi)
        {
            maxi = candles[i];
        }
    }
    int count = 0;
    for(int i=0;i<candles.size();i++)
    {
        if(candles[i]==maxi)
        {
            count++;
        }
    }
    return count;
    

}
--------------------------------------------------------------------------------
grades problem
https://www.hackerrank.com/challenges/grading/problem

vector<int> gradingStudents(vector<int> grades) {
    vector<int>ans;
    for(int i = 0; i < grades.size(); i++){
        
        if(grades[i]>37)
        {
            if((grades[i]+2)%5==0)
                ans.push_back(grades[i]+2);
            else if((grades[i]+1)%5==0)
                ans.push_back(grades[i]+1);
            else
             ans.push_back(grades[i]);
        }
        else
            ans.push_back(grades[i]);
        
    }
    
    
    return ans;
}