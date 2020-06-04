// program to recursively break a number into three parts to get maximums sum//

//top down approach//
# include<iostream>
using namespace std; 
int maxsum(int n)
{
    if(n==0||n==1)
    return n;
    return max( (maxsum(n/2)+maxsum(n/3)+maxsum(n/4)),n     );
}
     
int main() 
{ 
int n;cin>>n;
cout<<maxsum(n)<<endl;
} 

//bottom up approach//

# include<iostream>

using namespace std; 
int maxsum(int n)
{
   int dp[n+1];
   dp[0]=0;
   dp[1]=1;
   for(int i=2;i<=n;i++)
   {
       dp[i]=max(i,(dp[i/2]+dp[i/3]+dp[i/4] ) );
   }
   return dp[n];
}
     
int main() 
{ 
int n;cin>>n;
cout<<maxsum(n)<<endl;
  
} 
