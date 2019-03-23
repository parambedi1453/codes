#include<iostream>
using namespace std;

int func(int *a,int n,int d,int min)
{
      if(a[0]>min)
                return -1;
    int c=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]<=min)
        {
            sum+=a[i];
        }
        else
        {
            if(a[i]>min)
                return -1;
            c++;
            sum=a[i];
        }
    }
    if(c<=d)
        return 1;
    else
        return -1;
}
int shipWithinDays(int* a, int n, int D) {
    int r = 0,ans;
    for(int i=0;i<n;i++)
        r+=a[i];
    int l=0,mid;
    while(l<=r)
    {

      mid = (l+r)/2 ;
        int k =func(a,n,D,mid);
        if(k==1)
        {
            ans = mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
  int n,d;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<"ENTER NUMBER OF DAYS\n";
  cin>>d;
  int k = shipWithinDays(a,n,d);
  cout<<k;
}
/*

A conveyor belt has packages that must be shipped from one port to another within D days.

The i-th package on the conveyor belt has a weight of weights[i].  Each day, we load the ship with packages on the conveyor belt (in the order given by weights).
 We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within D days.



Example 1:

Input: weights = [1,2,3,4,5,6,7,8,9,10], D = 5
Output: 15
Explanation:
A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting
the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.



Input: weights = [1,2,3,1,1], D = 4
Output: 3
Explanation:
1st day: 1
2nd day: 2
3rd day: 3
4th day: 1, 1



 */
