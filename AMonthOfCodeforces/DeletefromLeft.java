import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;
import java.util.StringTokenizer;


public class DeletefromLeft {
     public static void main(String[] args) {
        Scanner fs=new Scanner(System.in);
         int T=1;
         for (int tt=0; tt<T; tt++) {
             String a = new String();
             String b = new String();

             a = fs.nextLine();
             b = fs.nextLine();
             int i = a.length()-1;
             int j = b.length() - 1;
            int length = Math.min(a.length(),b.length());  
            int count = 0;
            while(i>=0 && j>=0 ){
                if(a.charAt(i--)!=b.charAt(j--)){
                    break;
                }
                count+=2;
            }
            System.out.println(a.length()+b.length() - count);

            
                 
}
     }}
 
//  static class FastScanner {
//      BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
//      StringTokenizer st=new StringTokenizer("");
//      String next() {
//      while (!st.hasMoreTokens())
//          try {
//              st=new StringTokenizer(br.readLine());
//          } catch (IOException e) {
//              e.printStackTrace();
//          }
//          return st.nextToken();
//      }
     
//      int nextInt() {
//          return Integer.parseInt(next());
//      }
//      int[] readArray(int n) {
//          int[] a=new int[n];
//          for (int i=0; i<n; i++) a[i]=nextInt();
//          return a;
//      }
//      long nextLong() {
//          return Long.parseLong(next());
//      }
//  }

 
// }
