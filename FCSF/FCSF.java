
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

public class FCSF {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
                fcsf();   
         }
}
 
 private static void fcsf() {
    FastScanner fs=new FastScanner();
    System.out.println("Enter total no. of processes: ");
    int n = fs.nextInt();
    int bs[] = fs.readArray(n);
    int tat[] = new int[n];
    int wt[] = new int[n];
    for(int i=0;i<n;i++){
        if(i>0)
        tat[i] = tat[i-1] + bs[i];
        else
        tat[i] = bs[i];
    }
    wt[0] = 0;
    for(int i=1;i<n;i++){
        wt[i] = tat[i-1];
    }

    System.out.println("Process\t\t     Burst Time\t\t Waiting Time \t\t Turnaround Time");
    for(int i=0;i<n;i++){
        System.out.println("P" +"[" +(i+1)+ "]\t\t\t"+ bs[i] + "\t\t\t" + wt[i] + "\t\t\t" + tat[i]);
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
