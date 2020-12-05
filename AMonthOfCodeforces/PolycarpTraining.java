
// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
// import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Random;
import java.util.StringTokenizer;

public class PolycarpTraining {
         public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=1;
         for (int tt=0; tt<T; tt++) {
            int n = fs.nextInt();
            // HashSet<Integer> hs = new HashSet<>();
            List<Integer> arr = new ArrayList<>();
            for(int i=0;i<n;i++){
                int val = fs.nextInt();
                // if(!hs.contains(val))
                    arr.add(val);
                // hs.add(val);
            }
            Collections.sort(arr);
            // int k = 0;
            int j = 1;
            for(int i=0;i<arr.size();i++){
                    if(arr.get(i)>= j)
                        ++j;
                    else    continue;
            }
            System.out.println(j-1);
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
