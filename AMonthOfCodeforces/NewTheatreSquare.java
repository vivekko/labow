import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class NewTheatreSquare {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
             int n = fs.nextInt(),m = fs.nextInt();
             int x = fs.nextInt(),y = fs.nextInt();
              char arr[][] = new char[n][m];
              for(int i = 0;i<n;i++){
                  String val = fs.next();
                  for(int j =0 ;j<m;j++){
                      arr[i][j] = val.charAt(j);
                  }
              }
        
        // for(int i=0;i<n;i++){
        //     for(int j =0 ;j<m;j++){
        //         System.out.print(i+" "+j+" "+arr[i][j]);
        //     }
        //     System.out.println();
        // }
        int cost = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // System.out.println(arr[i][j+1]);
                if((y)<x*2){
                if(j+1<m && arr[i][j] =='.' && arr[i][j+1]== '.'){
                    cost += y;
                    j++;
                }
                else if(j<m && arr[i][j]=='.'){
                    cost += x;
                }
            }
            else{
                if(j<m && arr[i][j]=='.'){
                    cost += x;
                }
                else if(j+1<m && arr[i][j] =='.' && arr[i][j+1]== '.'){
                    cost += y;
                    j++;
                }

            }
            }
        }
        System.out.println(cost);
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
