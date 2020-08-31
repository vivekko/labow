import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class SumOfProductOfPairs {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=1;
         for (int tt=0; tt<T; tt++) {
                    int n = fs.nextInt();
                    int arr[] = new int[n];
                    for(int i=0;i<n;i++){
                        arr[i] = fs.nextInt();
                    }
                    solve(arr,n,0,0,1);
                 }
}
 
    private static void solve(int[] arr, int n, int i,int sum,int in) {
        if(in == 3){
            sum = sum + arr[0] * arr[1];
            System.out.println(sum);
            return;
        }
        solve(arr, n, i+1, sum,in+1);
        solve(arr, n, i, sum,in+1);

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
