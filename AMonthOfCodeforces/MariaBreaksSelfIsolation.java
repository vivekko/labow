import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class MariaBreaksSelfIsolation {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
            int n = fs.nextInt();
            int granny[] = fs.readArray(n);
            Arrays.sort(granny);
            int check = 1;
            int i;
            int ret = 0;
            for( i=0;i<n;i++){
                if( check - granny[i] >= 0 ){
                    ret = (i+1);
                }   
                ++check;
            }
            System.out.println(ret+1);
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
