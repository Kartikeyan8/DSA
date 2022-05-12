#include <bits/stdc++.h>
using namespace std;
void mult(string num1,string num2)
{
  int m=num1.size();
  int n=num2.size();
  vector<int> v(num1.size()+num2.size(),0);
        for(int i=num1.size()-1;i>=0;--i)
        {
            for(int j=num2.size()-1;j>=0;--j)
            {
                v[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                v[i+j]+=v[i+j+1]/10;
                v[i+j+1]%=10;

            }
        }
        int i=0;
        while(i<v.size() && v[i]==0) ++i;
        string res="";
        while(i<v.size()) res.push_back(v[i++] +'0');
        cout << res;


}
int main()
{
  string s1="328";
  string s2="381";
  mult(s1,s2);
}
