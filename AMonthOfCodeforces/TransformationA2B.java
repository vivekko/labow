import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.StringTokenizer;

public class TransformationA2B {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         long a,b;
         a = fs.nextInt();b = fs.nextInt();
         List<Long> ans = new ArrayList<Long>();
         int count = 0;
         if(!solveit(a,b,ans,count))
            System.out.println("NO");
    
}
 
private static boolean solveit(long a, long b,List<Long> ans,int count) {
    if(a==b){
        ans.add(a);
        System.out.println("YES");
        System.out.println(count+1);
        for(long i:ans){
            System.out.print(i+" ");
        }
        return true;
    }
    if(a>b)
    return false;
    ans.add(a);
        
    if(solveit(a*2, b,ans,count+1))
        return true;
    if(solveit(10*a+1, b,ans,count+1))
        return true;   
        // ans.remove(a);
    ans.remove(ans.size()-1);
    return false;
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
                        //         INDEX
                        // 1. DISCORD CHAT
                        // 2. DISTANCE 
                        // 3. SAVE THE PRISONER
                        // 4. THE GREAT RUN
                        // 5. WOW IT
