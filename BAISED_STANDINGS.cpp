#include<iostream>
#include<algorithm>
using namespace std;

int  min_badness(int pref_rank[],int n)
{
    int actual_rank[n];
    for(int i=0;i<n;i++)
        actual_rank[i]=i+1;

     sort(pref_rank,pref_rank+n);
        int min_badness=0;
        for(int i=0;i<n;i++)
        {

            min_badness=min_badness+abs(pref_rank[i]-actual_rank[i]);
        }
        return min_badness;
}


int main()
{

 int n;
 cin>>n;
 string s[n];
 int pref_rank[n];
 for(int i=0;i<n;i++)
 {
     cin>>s[i];
     cin>>pref_rank[i];

 }
 cout<<min_badness(pref_rank,n);
 return 0;

}
