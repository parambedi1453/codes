/*

  to count no of substrings that starts and end with '1'
  for eg  if the input string is “00100101”,
  then there are three substrings “1001”, “100101” and “101”.
*/

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i;
        int c=0,o=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                o=1;
              break;
            }
        }
        i=i+1;
        for(;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                c+=o;
                o+=1;
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}
