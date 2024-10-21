apples and oranges
https://www.hackerrank.com/challenges/apple-and-orange/problem

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    for(int i=0;i<apples.size();i++)
    {
        apples[i]=a+apples[i];
    }
    for(int i=0;i<oranges.size();i++)
    {
        oranges[i]=b+oranges[i];
    }
    int count = 0;
    int count1 = 0;
    for(int i=0;i<apples.size();i++)
    {
        if(apples[i]>=s && apples[i]<=t)
        {
            count++;
        }
    }
    for(int i=0;i<oranges.size();i++)
    {
        if(oranges[i]>=s && oranges[i]<=t)
        {
            count1++;
        }
    }
    cout<<count<<endl;
    cout<<count1;
}
--------------------------------------------------------------------------------------
