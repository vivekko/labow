import java.util.Scanner;

public class A_KString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        String ans = in.next();
        int freq[] = new int[26];
        for(char c:ans.toCharArray()){
            freq[c-'a']++;
        }
        String ret = new String();
        for(int i=0;i<freq.length;i++){
            if(freq[i]!=0)
                {
                    if(freq[i]%k!=0){
                        System.out.println(-1);
                        in.close();
                        return;
                    }
                    else if(freq[i]!=0){
                        for(int m=0;m<freq[i]/k;m++)
                            ret = ret + (char)(i+97);
                    }
                }
        }
        ret = ret.repeat(k);
        System.out.println(ret);
        in.close();
    }
}