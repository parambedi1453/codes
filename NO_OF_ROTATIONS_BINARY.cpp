/*
Counting number of rotation in circulary sorted array

No of rotation is equal to index of min element or the pivot element that is
where the prev and the next element both are greater than the mid element

next = (mid+1)%n; so that if mid points to last then mid+1 point to first
prev = (mid+n-1)%n; so that is mid point to first the mid -1 point to last element

*/
#include<iostream>
using namespace std;
int countRotations(int a[],int n)
{
    int l=0,r=n-1,mid,next,prev;
    while(l<=r)
    {

        if(a[l]<=a[r])
        return l;
        mid = (l+r)/2;
        next = (mid+1)%n;
        prev = (mid+n-1)%n;
        if(a[mid]<=a[next]&&a[mid]<=a[prev]) //for pivot
        return mid;

        else if(a[mid]<=a[r])//means right array is sorted and pivot point is not present here
         r=mid-1;

        else if(a[mid]>=a[l])
        l = mid+1;
    }
    return -1;
}
int main()
{
        int n;
        cout<<"Enter number of elements = \n";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int r = countRotations(a,n);
        cout<<r<<endl;
}
