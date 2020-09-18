import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class VarunDP {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
                int n = fs.nextInt();
                // int arr[] = new int[n];
                int arr[] = fs.readArray(n); 
                int maxE = Integer.MIN_VALUE;
                for(int i=0;i<n;i++){
                    maxE = Math.max(maxE, arr[i]);
                }
                goSolveIt(arr,maxE);

         }
}

 private static void goSolveIt(int[] arr, int maxE) {

    for(int i=0;i<arr.length;i++){
        if(arr[i]+5<=maxE){
            arr[i] = arr[i] + 5;
        }


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
