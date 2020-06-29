import java.util.Arrays;
import java.util.Scanner;

public class B_Sale{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int m = in.nextInt();
        int arr[] = new int[t];
        for(int i=0;i<arr.length;i++){
            arr[i] = in.nextInt();
        }
        int sum = 0;
        Arrays.sort(arr);
        for(int i=0;i<m;i++){
            if(arr[i]<=0)
            sum = sum + arr[i];
        }
        System.out.println(Math.abs(sum));
        in.close();
    }
}