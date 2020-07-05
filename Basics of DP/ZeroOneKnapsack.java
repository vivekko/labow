
public class ZeroOneKnapsack{
    public static void main(String[] args) {
        // Scanner in = new S-canner(System.in);?
        int []val = new int[]{60,100,120};
        int []wt = new int[]{60,20,30};
        int W = 50;
        int n = val.length;
        System.out.println(knapSack(val,wt,W,n));
    }
    private static int knapSack(int val[],int wt[],int W,int n){
        int i,j;
        int K[][] = new int[W+1][n+1];
        for(i=0;i<W;i++)
            for(j=0;j<n;j++){
                if(i==0||j==0)
                    K[i][j] = 0;
                else if(j>=wt[i-1])
                    K[i][j] = Math.max(val[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]);
                else
                    K[i][j] = K[i - 1][j]; 
            } 
  
        return K[n][W]; 
    } 
}