# include<iostream>

using namespace std; 
  
 int  max_len_chainof_pair(int small[],int large[],int n)

{
    int dp[n];
    for(int i=0;i<n;i++)dp[i]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(small[i]>large[j])
            dp[i]=max(dp[i],dp[j]+1);
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
int small[n],large[n];
for(int i=0;i<n;i++)cin>>small[i]>>large[i];
cout<<max_len_chainof_pair(small,large,n);

  
} 
