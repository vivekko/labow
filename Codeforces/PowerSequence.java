import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class PowerSequence {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=1;
         long big = Integer.MAX_VALUE;
         int c = 1;
         for (int tt=0; tt<T; tt++) {
             long min = Integer.MAX_VALUE;
                   int n = fs.nextInt();
                   int arr[] = new int[n];
                   for(int i=0;i<n;i++){
                       arr[i] = fs.nextInt();
                   } 
                   boolean a = true;
                   Arrays.sort(arr);
                   while(true){
                    long cnt = 0 ;
                    for(int i=0;i<n;i++){
                        if(Math.pow(c, i) > big){
                            a= false;
                            break;
                        }
                        cnt = cnt + Math.abs(c-arr[i]);
                        c=c*i;
                    }

                    min = Math.min(cnt, min);
                    if(a ==  false){
                        break;
                    }
                   }
                   System.out.println(min);
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
