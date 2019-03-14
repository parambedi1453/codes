#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int a[n];
	    int sum=0,sum1=0,f=0;
	    for(int i=0;i<n;i++)
	    {cin>>a[i];
	        sum=sum+a[i];
	    }
	   for(int i=0;i<n;i++)
	   {
	       sum1+=a[i];
	       sum-=a[i];
	       if(sum1-a[i]==sum)
	       {
	           cout<<i+1<<endl;
	           f=1;
	           break;
	       }
	   }
	   if(f==0)
	   cout<<-1<<endl;
	}
	return 0;
}
