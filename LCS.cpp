#include <iostream>
using namespace std;




int main()
{

int n,m;cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<m;i++)cin>>b[i];
int dp[m+1][n+1];
for(int i=0;i<=m;i++)dp[i][0]=0;
for(int i=0;i<=n;i++)dp[0][i]=0;
for(int i=1;i<=m;i++)
{
    
    for(int j=1;j<=n;j++)
    {
        
        if(a[i-1]==b[j-1])
        {
        dp[i][j]=dp[i-1][j-1]+1;
       
      }
        else
     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        
    }
}
cout<<dp[m][n]<<endl;
	return 0;
}
