#include<bits/stdc++.h>

using namespace std;
#define MAX 100
int lis(int arr[],int n)
{
  int lis[n];
  lis[0]=1;
  for (size_t i = 1; i < n; i++) {
    lis[i]=1;
    for(int j=0;j<i;j++)
    {
      if(arr[i]>arr[j] && lis[i]<lis[j]+1)
      {lis[i]=lis[j]+1;}
    }
  }

    return *max_element(lis, lis + n);

}

int main()
{
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<lis(arr, n);
}
