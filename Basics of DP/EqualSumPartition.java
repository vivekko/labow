class Solution {
    public boolean canPartition(int[] nums) {
        int sum = 0;
        for(int i=0;i<nums.length;i++)
            sum = sum + nums[i];
        int n = nums.length;
        if((sum&1)==1)
            return false;
        else{
            boolean ans;
            ans = canSubset(nums,n,sum/2);
             return ans;
        }     
    }
    private boolean canSubset(int []arr,int n,int sum)
    {
        boolean dp[][] = new boolean[n+1][sum+1];
        for(int i=0;i<sum+1;i++)
            dp[0][i] = false;
        for(int i=0;i<n;i++)
            dp[i][0] = true;
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                    dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        
            
        return dp[n][sum];    
    }
}