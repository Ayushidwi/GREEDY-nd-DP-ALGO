//program to convert string s to string p by performing any of the three following steps 1.replace  2.insert  3.remove
all the steaps have same cost . find the minimum cost to convert the string//

 # include<iostream>
#include<string.h>
using namespace std; 
  
int min_no_operations(string s,string p)
{
   int row=p.length();
   int col=s.length();
   
    
    int dp[row+1][col+1];
    for(int i=0;i<=row;i++)
    dp[i][0]=i;
    for(int i=0;i<=col;i++)
    dp[0][i]=i;
    for(int i=1;i<=row;i++)
    
    {
        for(int j=1;j<=col;j++)
        {
            if(s[j-1]==p[i-1])
            dp[i][j]=dp[i-1][j-1];
            else
            dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
        }
    }
       for(int i=0;i<=row;i++)
    
    return dp[row][col];
    
    
}
     
int main() 
{ 
string s,p;
cin>>s;cin>>p;
cout<< min_no_operations(s,p)<<endl;
  
} 
