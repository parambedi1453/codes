#include<iostream>
using namespace std;
int ubound(int a[],int n,int k)
{
    int l=0,r=n,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>k)
        {
            ans=mid;
            r=mid-1;
        }
        else
        l=mid+1;
    }
    return ans;
}
int lbound(int a[],int n,int k)
{
    int l=0,r=n-1,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>=k)
        {
            ans=mid;
            r=mid-1;
        }
        else 
        l=mid+1;
    }
    return ans;
}
int main()
{
    int n,k;
    cout<<"ENTER NUMBER OF ELEMENTS=\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int uper,lower;
    cout<<"ENTER NUMBER TO FIND UPPER AND LOWER BOUND \n";
    cin>>k;
    uper=ubound(a,n,k);
    lower=lbound(a,n,k);
    cout<<"UPPER BOUND IS ="<<uper<<endl;
    cout<<"LOWER BOUND IS="<<lower<<endl;
}
