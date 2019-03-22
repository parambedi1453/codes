
/* FLOOD FILL ALGORITHM
Given a 2D screen, location of a pixel in the screen ie(x,y) and a color(K), your task is to replace color of the given pixel and all adjacent(excluding diagonally adjacent) same colored pixels with the given color K.

Example:

                                {{1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 2, 2, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 2, 2, 0},
                      {1, 1, 1, 1, 1, 2, 1, 1},
                      {1, 1, 1, 1, 1, 2, 2, 1},
                      };

                        x=4, y=4, color=3

                               {{1, 1, 1, 1, 1, 1, 1, 1},
                     {1, 1, 1, 1, 1, 1, 0, 0},
                     {1, 0, 0, 1, 1, 0, 1, 1},
                     {1, 3, 3, 3, 3, 0, 1, 0},
                     {1, 1, 1, 3, 3, 0, 1, 0},
                     {1, 1, 1, 3, 3, 3, 3, 0},
                     {1, 1, 1, 1, 1, 3, 1, 1},
                     {1, 1, 1, 1, 1, 3, 3, 1}, };


Note: Use zero based indexing.


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. The first line of each test case contains Two integers N and M denoting the size of the matrix. Then in the next line are N*M space separated values of the matrix. Then in the next line are three values x, y and K.

Output:
For each test case print the space separated values of the new matrix.

Constraints:
1<=T<=100
1<=M[][]<=100

Example:
Input:
3
3 4
0 1 1 0 1 1 1 1 0 1 2 3
0 1 5
2 2
1 1 1 1
0 1 8
4 4
1 2 3 4 1 2 3 4 1 2 3 4 1 3 2 4
0 2 9

Output:
0 5 5 0 5 5 5 5 0 5 2 3
8 8 8 8
1 2 9 4 1 2 9 4 1 2 9 4 1 3 2 4


*/

#include <iostream>
using namespace std;
void dig_r(int **a,int r,int c,int i,int j,int val,int k)
{
    if(i>=r||j>=c||i<0||j<0||a[i][j]==k)
    {
        return;
    }
    else if(a[i][j]==val)
    {
        a[i][j]=k;
        dig_r(a,r,c,i,j+1,val,k);
        dig_r(a,r,c,i,j-1,val,k);
        dig_r(a,r,c,i+1,j,val,k);
        dig_r(a,r,c,i-1,j,val,k);
    }
    else
    return;
}

int main() {
	//code
	  int t,n,m,posx,posy,k;
	  cin>>t;
	  while(t-->0)
	  {
	      cin>>n>>m;
	      int **a=new int*[n];
	      for(int i=0;i<n;i++)
	      {
	          *(a+i)=new int[m];
	      }
	      for(int i=0;i<n;i++)
	      {
	          for(int j=0;j<m;j++)
	          {
	              cin>>a[i][j];
	          }
	      }
	      cin>>posx>>posy>>k;
	      int val = a[posx][posy];
	      dig_r(a,n,m,posx,posy,val,k);
	      for(int i=0;i<n;i++)
	      {
	          for(int j=0;j<m;j++)
	          {
	              cout<<a[i][j]<<" ";
	          }
	      }
	      cout<<endl;
	  }
	return 0;
}

