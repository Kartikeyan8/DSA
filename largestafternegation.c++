#include<bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int>& nums, int k) {

        int n = nums.size();

        // sort array from min to max
        sort(nums.begin(),nums.end());

        // negate as many negative value as possible
        for(int i=0; i<n && k>0 && nums[i]<0;i++)
        {
            nums[i] = -nums[i];
            k--;
        }
        int sum = accumulate(nums.begin(),nums.end(),0);
        int minv = *min_element(nums.begin(),nums.end());
        return sum-(k%2)*minv;
      }

      int main()
{
    vector<int> v={-4,-3,-2,1,2};
    cout<<largestSumAfterKNegations(v,3);



}
