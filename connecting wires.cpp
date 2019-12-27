#include<iostream>
#include<algorithm>
using namespace std;
void connectwires(int green[],int orange[],int n)
{
   sort(green,green+n);
   sort(orange,orange+n);
   for(int i=0;i<n;i++)
   {
       cout<<green[i]<<","<<orange[i]<<endl;
   }
}

int main()
{

    int n;
    cin>>n;
    int green[n],orange[n];
    for(int i=0;i<n;i++)
    {

    cin>>green[i];

    }
    for(int i=0;i<n;i++)
    {

    cin>>orange[i];

    }
    connectwires(green,orange,n);
    return 0;
}
