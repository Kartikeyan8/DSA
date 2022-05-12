#include<bits/stdc++.h>
using namespace std;

void repeatedSubstringPattern(string s) {
  int n=s.size();

    vector<int> lps(n,0);
    for(int i=1;i<s.size();i++)
    {
      int j=lps[i-1];
      while(j>0 && s[i]!=s[j])
        j=lps[j-1];
      if(s[i]==s[j])
        ++j;
      lps[i]=j;

    }
    for (size_t i = 0; i < lps.size(); i++) {
      std::cout << lps[i] << '\n';
    }
}
int main()
{
    repeatedSubstringPattern("ababba");
    return 0;
}
