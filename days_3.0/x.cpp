#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };

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