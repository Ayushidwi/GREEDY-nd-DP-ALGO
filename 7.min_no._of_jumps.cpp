# include<iostream>
# include<climits>
using namespace std; 
  
int minjumps(int arr[],int n)
{
    if(n==0)
    return INT_MAX;
    int dp[n];dp[0]=0;
    for(int i=1;i<n;i++)dp[i]=INT_MAX;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(j+arr[j]>=i)
            dp[i]=min(dp[i],dp[j]+1);
        }
    }
    return dp[n-1];
}
     
int main() 
{ 
int arr[]={1,3,5,8,9,2,6,7,6,8,9};
int size=sizeof(arr)/sizeof(int);
cout<<minjumps(arr,size)<<endl;

  
} 
