#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void mincoins(int coins[],int n,int t)
{
    while(n>0)
    {
        int index=upper_bound(coins,coins+t,n)-1-coins;
        cout<<coins[index]<<" ";
        n=n-coins[index];
    }
}
int main()
{
   int n;
   cin>>n;
   int coins[]={1,2,5,10,20,50,100,200,500,2000};
   int t=sizeof(coins)/sizeof(int);
   mincoins(coins,n,t);
   
}
