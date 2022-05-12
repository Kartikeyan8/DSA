#include <bits/stdc++.h>
using namespace std;
void permute(string s,int l,int r)
{
  map<string,int>m;
  if(l==r)
  cout<<s<<" ";
  else{
  for(int i=l;i<=r;i++)
  {
    swap(s[l],s[i]);
    permute(s,l+1,r);
    swap(s[l],s[i]);
  }
}
}
int main()
{
    string s="abc";
    permute(s,0,s.length());
}
