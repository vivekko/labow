class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==0)nums[i]=-1;
        int len=0;
        unordered_map<int,int>map;
        map[0]=-1;
        
         for(int i=0;i<nums.size();i++)
         {
             
             sum+=nums[i];
             if(map.find(sum) != map.end()){
                 len=max(len,i-map[sum]);
             }
            else
             map[sum]=i;
         }
        return len;
    }
};


