import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Random;
import java.util.StringTokenizer;

public class JugglingLetters {
     public static void main(String[] args) {
         FastScanner fs=new FastScanner();
         int T=fs.nextInt();
         for (int tt=0; tt<T; tt++) {
                    int freq[] = new int[26];
                    int n = fs.nextInt();
                    for(int i=0;i<n;i++){
                        String val = fs.next();
                        for(char c:val.toCharArray()){
                            freq[c-'a']++;
                        }
                    }
                    int flag = 0;
                    for(int i=0;i<26;i++){
                        // if(freq[i]!=0)
                            if(freq[i] %n != 0){
                                System.out.println("NO");
                                flag = 1;
                                break;
                            }
                    }
                    if(flag!=1)
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
