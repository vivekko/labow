import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class Ano {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
        // int T = 1;
         for (int tt=0; tt<T; tt++) {
            int n = fs.nextInt();
            int[] count = new int[102];
            Arrays.fill(count, 0);
            int []values = fs.readArray(n); 
            for(int i=0;i<n;i++){
                count[values[i]]++;
            }      
            int mex1 = -1,mex2 =-1 ;
            int i;
            for(i=0;i<102;i++){
                if(count[i] <= 0){
                    mex1 = i;
                    count[i]--;
                    break;
                }
                count[i]--;
            }   u   u                                                                                                                                       

            for(i=0;i<102;i++){
                if(count[i] <= 0){
                    mex2 = i;
                    break;
                }
            }
            System.out.println(mex1+mex2);
        }
        
}
 
 static class FastScanner {
     BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
     StringTokenizer st=new StringTokenizer("");
     String next() {
     while (!st.hasMoreTokens())
         try {
             st=new StringTokenizer(br.readLine());
         } catch (IOException e) {
             e.printStackTrace();
         }
         return st.nextToken();
     }
     
     int nextInt() {
         return Integer.parseInt(next());
     }
     int[] readArray(int n) {
         int[] a=new int[n];
         for (int i=0; i<n; i++) a[i]=nextInt();
         return a;
     }
     long nextLong() {
         return Long.parseLong(next());
     }
 }

 
}
