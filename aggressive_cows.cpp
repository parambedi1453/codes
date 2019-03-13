
/****AGGRESSIVE COWS SPOJ PROBLEM SOLUTION****************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int check_cow(vector<int> &a,int n,int c,int mid)
{
    int c1=1,first=a[0],second;
    for(int i=1;i<n;i++)
    {
      second=a[i];
      if(second-first>=mid)
      {
        c1++;
        first=second;
        if(c1>=c)
        return 1;
      }
    }
    return 0;
}
int main()
{
    int t,n,c,l,r;
    cin>>t;//ENTER NUMBER OF TEST_CASES
    while(t--)
    {
      cin>>n>>c;//ENTER NUMBER OF POINTS AND COWS
      vector<int> a(n);
      for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a.begin(),a.end());
      l=a[0];
      r=a[n-1]-a[0];
      int mid,ans;
      while(l<=r)
      {
          mid=(l+r)/2;
          if(check_cow(a,n,c,mid))
          {
            ans=mid;
            l=mid+1;
          }
          else
          {
            r=mid-1;
          }
      }
      cout<<ans<<endl;
    }
}
