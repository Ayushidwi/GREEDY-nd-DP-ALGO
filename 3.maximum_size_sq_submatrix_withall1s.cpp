// program to find maximum size square sub matrix with all 1s//
# include<bits/stdc++.h> 
#define row 6
#define col 5
using namespace std; 
  

int  max_size_sq_matrix(int arr[row][col])
{
    int dp[row][col];
    for(int i=0;i<row;i++)
    dp[i][0]=arr[i][0];
    for(int i=0;i<col;i++)
    dp[0][i]=arr[0][i];
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            if(arr[i][j]==0)
            dp[i][j]=0;
            else if(arr[i][j]==1)
            dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
            
            
        }
    }
    int max=dp[0][0];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(max<dp[i][j])
            max=dp[i][j];
        }
    }
    return max;
}

int main() 
{ 

   int arr[row][col];
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       cin>>arr[i][j];
   }
  cout<< max_size_sq_matrix(arr)<<endl;
} 
