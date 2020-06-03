//program to find the maximum sum increasing subsequence//


# include<iostream>

using namespace std; 
  
int max_sum(int arr[],int n)
{
    int dp[n];
    for(int i=0;i<n;i++)
    dp[i]=arr[i];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            dp[i]=max(dp[i],dp[j]+arr[i]);
        }
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
int n;cin>>n;
int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
cout<<max_sum(arr,n);

  
} 
