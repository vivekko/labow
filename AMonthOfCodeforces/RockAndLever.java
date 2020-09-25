
// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;
import java.util.Vector;

public class RockAndLever {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
            int n = fs.nextInt();
            int arr[] = fs.readArray(n);
            int count = 0;
            int k = 0;
            int store[][] = new int[n][2];
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    int val = arr[i]&arr[j];
                    int val2 = arr[i]^arr[j];
                    if(val >= val2) {
                        count++;
                    store[k][0] = arr[i];
                    store[k][1] = arr[j];
                    ++k;
                }
            }     
         
        }
        System.out.println(count);
        for(int i=0;i<n;i++)
        for(int j=0;j<2;j++)
        System.out.print(store[i][j]+" ");
        System.out.println();
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
