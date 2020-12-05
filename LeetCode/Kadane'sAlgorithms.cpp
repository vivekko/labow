#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxC = nums[0];
        int maxG = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxC = max(maxC + nums[i],nums[i]);
            if(maxC>maxG)
                maxG = maxC;
        }
        return maxG;
    }
};
int main()
{
    Solution s;