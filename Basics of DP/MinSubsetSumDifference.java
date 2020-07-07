public class MinSubsetSumDifference {
    public static void main(String[] args) {
        int arr[] = new int[]{3,1,4,2,2,1};
        int n = arr.length;
        // To find S1 and S2 but not possible so we find the range 
        //  Range - 2*S1
        int ans = minsubdiff(arr,n);
        System.out.println(ans);
    }
    private static int minsubdiff(int arr[],int n){
        int sum = 0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        // We found range
        boolean dp[][] = new boolean[n+1][sum+1];
        for(int i=0;i<=sum;i++)
            dp[0][i] = false;
        for(int i=0;i<=n;i++)
            dp[i][0] = true;
        // Initialization Done!
        // Now filtering off will take place
        for(int i=1;i<=n;i++)
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j)
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        int diff=32000;
        for(int i=sum/2;i>=0;i--){
            if(dp[n][i]==true){
            diff = sum - 2*i;
            break;
            }
        }
            return diff;
        }

    
}