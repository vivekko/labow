import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class WalkingTakashi {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=1;
         for (int tt=0; tt<T; tt++) {
            int x = fs.nextInt();
            int k = fs.nextInt();int d = fs.nextInt();
            long ans = solve(x,k,d,x);
            System.out.println(ans);
        }
}
 
 private static long solve(int x, int k, int d, int maxValue) {
   if(k==0)
   {
          return x;
   }
   solve(x+d, k-1, d, maxValue);
   if(x-d>=0)
   maxValue = Math.min(x+d, x-d);
   solve(x-d, k-1, d, maxValue);
   
   return maxValue;
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
