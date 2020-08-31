import java.util.Scanner;
public class B_Gifts_Fixing {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int ig[] = new int[n];
            int jg[] = new int[n];
            int mi  = Integer.MAX_VALUE;
            int mj = Integer.MAX_VALUE;
            for(int i=0;i<n;i++)
            {
                ig[i] = in.nextInt();
                mi = Math.min(ig[i], mi);
            }
            for(int i=0;i<n;i++)
            {
                jg[i] = in.nextInt();
                mj = Math.min(jg[i], mj);
            }
            long counti = 0;
            // int countg = 0;

            for(int i=0;i<n;i++){
                if(ig[i]>mi && jg[i]>mj)
                    {
                       counti = counti + Math.max(ig[i] - mi,jg[i]-mj);
                    //    countg = countg + (jg[j] - mj);
                    //    int mid = min()
                    }
                if(ig[i]>mi && jg[i]==mj){
                    counti = counti + Math.max(ig[i] - mi,jg[i]-mj);
                }
                if(ig[i]==mi && jg[i]>mj){
                    counti = counti + Math.max(ig[i] - mi,jg[i]-mj);
                }
                if(ig[i]==mi && jg[i]==mj){
                    continue;
                }
        
            }
            System.out.println(counti);
        
        }
        in.close();
    }
   
}