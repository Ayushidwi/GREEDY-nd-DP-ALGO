#include <iostream>
#include<algorithm>
using namespace std;


int min_pair_chopstick(int l[],int n,int d)
{
    int count=0;
    sort(l,l+n);
int i=0;
while(i<n)
    {
        if(abs(l[i]-l[i+1])<=d)
        {
            i=i+2;

            count++;
        }
        else
        {
           i=i+1;

        }
    }
    return count;
}

int main() {
int n,d;
cin>>n>>d;
int l[n];
for(int i=0;i<n;i++)
cin>>l[i];
cout<<min_pair_chopstick(l,n,d);
	return 0;
}

