import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class JOEonTV {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
        //  int T=fs.nextInt();
        int T = 1;
         for (int tt=0; tt<T; tt++) {
            int n = fs.nextInt();
            double sum = 0.00;
            // double div = n;
            for(int i=n;i>0;i--){
                sum+=((double)1/i);
            }
            System.out.println(sum);
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
