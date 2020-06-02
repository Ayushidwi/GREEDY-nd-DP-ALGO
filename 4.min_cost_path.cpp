
# include<iostream>
#define n 3
using namespace std; 
  

  int  mincostpath(int arr[n][n]) 
  {
      int dp[n][n];
   dp[0][0]=arr[0][0];
      for(int i=1;i<n;i++)
      dp[i][0]=dp[i-1][0]+arr[i][0];
      for(int i=1;i<n;i++)
      dp[0][i]=dp[0][i-1]+arr[0][i];
      for(int i=1;i<n;i++)
      {
          for(int j=1;j<n;j++)
          {
              dp[i][j]=arr[i][j]+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
          }
      }
return dp[n-1][n-1];
  }
     
int main() 
{ 

  
  int arr[n][n];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      cin>>arr[i][j];
  }
  cout<<mincostpath(arr)<<endl;
} 
