#include <iostream>
using namespace std;

/*

to find last man at even postion standing in queue
for eg
input 5
Output 4
explanation 1 2 3 4 5
2 4
4//4th is the last position ma that will be left in queue

*/

int func(int a[],int n)
{
    if(n==1){
        return a[0];
    }
    else
    {
        int b[n/2];
        int k=0;
        for(int i=1;i<n;i++)
        {
            if(i%2==1)
            {
                b[k++]=a[i];
            }
        }
        func(b,n/2);
    }
}
int main() {

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        a[i]=i+1;
        int d = func(a,n);
        cout<<d<<endl;
    }


	//code
	return 0;
}
