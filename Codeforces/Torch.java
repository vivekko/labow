import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class Torch {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
                    long x  = fs.nextLong(),y = fs.nextLong(),k = fs.nextLong();
                    long val = 1;
                    // long kk = 0;
                    long keep = y*k;
                    int i = 1;
                    long kk = (k*y + k-1 + x - 1 - 1)/(x-1);
                                    //    kk = Math.ceil((k * y + k - 1/ x - 1); 

                    System.out.println(kk + k);
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
