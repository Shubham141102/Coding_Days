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