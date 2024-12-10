// calculate the sum to n numbers
#include <iostream>
using namespace std;
int sum(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    return sum;
}


int binary_to_decimal(int N){
    int power = 1;
    int ans = 0;
    while(N>0)
    {
        int rem = N%10;
        N=N/10;
        ans = ans +(rem*power);
        power = power*2;
    }
    return ans;

}


int binar(int N)
{
    int ans =0;
    int power = 1;
    // int rem;
    while(N>0)
    {
        int rem = N%2;
        N=N/2;
        ans = ans+(rem*power);
        power = power*10;
    }
    return ans;
}


int main()
{
    cout << "Enter the number:";
    int n;
    cin >> n;
    cout << "the sum upto " << n << " is " << sum(n)<<endl;

    cout<<"Binary digits for "<<n<<" is "<<binar(n)<<endl;


    int number = binar(n);
    cout<<"the decimal number for "<<number<<" is "<<binary_to_decimal(number)<<endl;
    return 0;
}