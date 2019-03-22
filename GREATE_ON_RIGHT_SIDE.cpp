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
        stack<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        s.push(a[n-1]);
        for(int i = n-2;i>=0;i--)
        {
            if(a[i]>=s.top())
            s.push(a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            if(s.top()>a[i])
            {
                a[i]=s.top();
            }
            else if(s.top()==a[i])
            {
                s.pop();
                a[i]=s.top();
            }
        }
        a[n-1]=-1;
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

        cout<<endl;
    }
	//code
	return 0;
}
//problem explanation
/*

You are given an array A of size N. Replace every element with the next greatest element (greatest element on its right side) in the array. Also, since there is no element next to the last element, replace it with -1.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line is N, the size of tha array. The second line contains N space separated integers.

Output:
For each testcase, print the modified array.

Constraints:
1 <= T <= 50
1 <= N <= 100
1 <= Ai <= 1000

Example:
Input:
2
6
16 17 4 3 5 2
4
2 3 1 9

Output:
17 5 5 5 2 -1
9 9 9 -1
*/
