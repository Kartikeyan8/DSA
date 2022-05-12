#include<bits/stdc++.h>
using namespace std;
void MatrixChainOrder(int arr[])
{
  int n=4;
  int m[5][5]={0};
  int s[5][5]={0};
  int j,min,q;
  for(int d=1;d<n-1;d++)
  {
    for(int i=1;i<n-d;i++)
    {
      j=i+d;
      min=999999;
    for(int k=i;k<=j-1;k++)
    {
      q=m[i][k]+m[k+1][j]+arr[i-1]*arr[j]*arr[k];
      if(q<min)
      {
        min=q;
        s[i][j]=k;
      }
    }
    m[i][j]=min;
  }
}
  cout<<m[1][n-1]<<" ";
}
int main()
{
    int arr[] = { 3,1,5,8 };
    int n = sizeof(arr) / sizeof(arr[0]);

     MatrixChainOrder(arr);
}
