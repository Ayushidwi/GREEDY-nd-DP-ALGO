#include<iostream>
using namespace std;

int lcs(int n,int arr[])
{
    int dp[100];
    for(int i=0;i<n;i++)dp[i]=1;
    for(int i=1;i<n;i++)
    {
        int t=1;int m;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
            {
                m=1+dp[j];

              t= max(t,m);
            }

        }
        dp[i]=t;
    }
    int max=dp[0];
    for(int i=1;i<n;i++)
    {
        if(dp[i]>max)
            max=dp[i];
    }
    return max;

}

int main()
{
    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
    cout<<lcs(n,arr)<<endl;
}
