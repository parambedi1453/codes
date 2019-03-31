#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>a[i][j];
      }
    }
    cout<<"ARRAY BEFORE ROTATION = \n";
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i<j){
          int t = a[i][j];
          a[i][j]=a[j][i];
          a[j][i] = t;
        }
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n/2;j++){
        int t = a[i][j];
        a[i][j] = a[i][n-j-1];
        a[i][n-j-1] =t;
      }
    }
    cout<<"ARRAY AFTER RORATION = \n";
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
      }
      cout<<endl;
    }


}
