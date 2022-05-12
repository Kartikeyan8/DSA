#include<bits/stdc++.h>

using namespace std;
int lcs(char *x,char *y,int m,int n)
{
  if(x[m-1]==y[n-1])
  return 1+lcs(x,y,m-1,n-1);
  else
  return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n-1));
}
int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);

    cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ;

    return 0;
}
