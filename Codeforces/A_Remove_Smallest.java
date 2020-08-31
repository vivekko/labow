import java.util.Arrays;
import java.util.Scanner;
public class A_Remove_Smallest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int m = in.nextInt();
            int arr[] = new int[m];
            for(int i=0;i<m;i++){
                arr[i] = in.nextInt();
            }
                            if (m==1) {
                                System.out.println("YES");
                                continue;
                            }
        Arrays.sort(arr);
        int f = 0;
        for(int i=0;i<arr.length-1;i++){
            if(arr[i+1]-arr[i]>1)
                {
                    System.out.println("NO");
                    f=1;
                    break;
                }
        }
        if(f!=1){
            System.out.println("YES");
        }

    }
        
        in.close();
    }
}
