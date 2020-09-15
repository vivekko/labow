import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class TilingChallenge {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=1;
         for (int tt=0; tt<T; tt++) {
            int n = fs.nextInt();
            char[][] board = new char[n][n];
            // int []count = new int[n];
            for(int i=0;i<n;i++){
               String col = fs.next();
                for(int j=0;j<col.length();j++){
                    board[i][j] = col.charAt(j);
                }
            }
        //    for(char[] i:board){
        //        for(char k:i)
        //         System.out.print(k);
        //         System.out.println();
        //    }
            //Eliminate stupid stuffs
           for (int i = 0; i < n; i++) 
            for(int j = 0; j < n; j++){
                if(board[i][j] == '.')
                    if(i+2<=n-1 && j+1<=n-1 && j-1 >= 0){
                        if(board[i+2][j] == '#' || board[i+1][j+1] == '#' || board[i+1][j-1] == '#'){
                            System.out.println("No");
                            return;
                        }
                        board[i+2][j] = '#';
                        board[i+1][j+1] = '#';
                        board[i+1][j-1] = '#';
                        board[i][j] = '#';
                        board[i+1][j] = '#';
            }
            else{
                System.out.println("NO");
                return;
            }
        }    
        System.out.println("YES");     
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
