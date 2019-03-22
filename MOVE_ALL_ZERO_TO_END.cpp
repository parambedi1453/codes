/*
i/p 3 5 0 0 4
o/p 3 5 4 0 0

*/

#include <iostream>
#include<stack>
using namespace std;

int main() {

    int t,n;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]!=0)
            s.push(a[i]);
        }
        int j=0;
        while(!s.empty())
        {
            a[j++]=s.top();
            s.pop();
        }
        while(j<n)
        {
            a[j++]=0;
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
	//code
	return 0;
}
