#include<iostream>
#include<stack>
using namespace std;


/*TO MAKE LEADER ARRAY
An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader.
for eg
16 17 4 5 2
leader array is 17 5 2
*/



#include <iostream>
#include<stack>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    stack<int> s;
	    s.push(a[n-1]);
	    for(int i=n-2;i>=0;i--)
	    {
	        int top = s.top();
	        if(a[i]>=top)
	        s.push(a[i]);
	    }
	     while(!s.empty()){
	        int a=s.top();
	       cout<<a<<" ";
	        s.pop();
	    }
	    cout<<endl;
	}
	return 0;
}
