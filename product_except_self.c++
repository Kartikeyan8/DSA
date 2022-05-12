#include<bits/stdc++.h>
using namespace std;
void send(vector<int> v,int size)
{
  std::vector<int> ans(size,1);
  int curleft=1;
  for (int i = 0; i < size; i++) {


    curleft=curleft*v[i];
    ans[i+1]=curleft;

  }

  int curright=1;
  for (int i = size-1; i > 0; i--) {
    /* code */
    curright=curright*v[i];
    ans[i-1]=curright;
  }
  for (size_t i = 0; i < size; i++) {
    /* code */
    cout<<ans[i]<<" ";
  }


}
int main()
{
  std::vector<int> v={1,2,3,4};
  send(v,4);

}
