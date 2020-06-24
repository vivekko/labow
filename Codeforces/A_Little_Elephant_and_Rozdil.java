import java.util.Arrays;
import java.util.Scanner;

public class A_Little_Elephant_and_Rozdil {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        int[] brr = new int[n];
        

        for(int i = 0;i<arr.length;i++){
            arr[i] = in.nextInt();
        }
        if(arr.length ==1){
            System.out.println(1);
            in.close();
            return;
        }

        for(int i = 0;i<arr.length;i++){
            brr[i] = arr[i];
        }

        Arrays.sort(arr);
        if(arr[0]==arr[1])
            {
                System.out.println("Still Rozdil");
                in.close();
                return;
            }
        else{
            for(int i = 0;i<n;i++){
                if(arr[0] == brr[i])
                    {
                        System.out.println(i+1);

                        in.close();
                        return;
                    }
            }

        }
        
        in.close();
        
    }
}