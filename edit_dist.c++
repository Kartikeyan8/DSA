#include<bits/stdc++.h>

using namespace std;
class Solution {
public:

int dist(string s,string t,int m,int n)
{
  if(m==0)
  return n;
  if(n==0)
  return m;
  if(s[m-1]==t[n-1])
  {
    return dist(s,t,m-1,n-1);
  }
  else{
    return 1 + min(min(dist(s,t,m-1,n),dist(s,t,m,n-1)),dist(s,t,m-1,n-1));
  }
}
    int minDistance(string word1, string word2) {
        int m=word2.length();
        int n=word2.length();
        int k=dist(word1,word2,m,n);
        return k;

    }
};
int main()
{
  Solution s;
  int k=s.minDistance("dinitrophenylhydrazine","benzalphenylhydrazone");
    cout<<k;

    return 0;
}
