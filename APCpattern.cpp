
/*
THE CODE PRINTS THE FOLLOWING PATTERN



ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A


*/

#include<iostream>
using namespace std;
int main()
{
    int x;
    for(int i=1;i<=6;i++)
    {

        for(int j=65;j<=71-i;j++)
        {
            cout<<(char)j;
        }
        int p=2*(i-1)-1;
        for(int k=0;k<p;k++)
        {
            cout<<" ";
        }
        if(i==1)
        {
            x=69;
        }
        else
        {
            x=71-i;
        }
    for(int j=x;j>=65;j--)
            {
                cout<<(char)j;
            }
        cout<<endl;
    }
}

