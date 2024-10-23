breaking the record
https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

vector<int> breakingRecords(vector<int> scores) {
    vector<int>ans;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int count_min=-1;
    int count_max = -1;
    for(int i=0;i<scores.size();i++)
    {
        if(scores[i]<mini)
        {
            mini = scores[i];
            count_min++;
        }
    }
    for(int i=0;i<scores.size();i++)
    {
        if(scores[i]>maxi)
        {
            maxi = scores[i];
            count_max++;
        }
    }
    ans.push_back(count_max);
    ans.push_back(count_min);
    return ans;
}
-----------------------------------------------------------------------------------