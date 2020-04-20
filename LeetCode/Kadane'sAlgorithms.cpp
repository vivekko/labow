#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int a = 0;
        for(int x : nums) {
			 ans = max(ans, a + x); 
             a = max(0, a + x);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int ans = s.maxSubArray;
    cout<<ans;
}