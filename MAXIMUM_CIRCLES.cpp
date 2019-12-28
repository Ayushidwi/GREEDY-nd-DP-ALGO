#include<iostream>
using namespace std;

int findmaxcircles(int c[],int r[],int n)
{
    int i;
    int s[n],f[n];
    for(int i=0;i<n;i++ )
    {
        s[i]=c[i]-r[i];
        f[i]=c[i]+r[i];
    }
    int count=0;
     i=0;
    for(int j=1;j<n;j++)
    {
        if(s[j]<=f[i])
            count++;
        else
            i=j;
    }
    return count;
}





int main()
{
    int n;
    cin>>n;
    int c[n],r[n];
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int i=0;i<n;i++)
        cin>>r[i];
    cout<<findmaxcircles(c,r,n)<<endl;
}
