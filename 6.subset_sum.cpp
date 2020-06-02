# include<iostream>

using namespace std; 
  
bool subset(int arr[],int m,int n)
{
    if(m==0)
    return true;
    if(n==0&&m!=0)
    return false;
    
    for(int i=n-1;i>=0;i++)
    {
       return subset(arr,m-arr[i],n-1)||
       subset(arr,m,n-1);
    }
   
}
     
int main() 
{ 
int n;cin>>n;

int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int m;cin>>m;
if(subset(arr,m,n))
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
  
} 
