import java.util.Scanner;

public class A_ultraFast_math {
    public static void main(String args[])
    {
        // int a,b;
        // int res=0;
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        int length=0;
        int arr[] = new int[50] ;
        while(a>0){
            // length++;
            int val1 = a%10;
            int val2 =b%10;
            // cout<<val1<<endl<<val2<<endl;
            if(val1==val2)
                arr[length] = 0;
            else
                arr[length] = 1;
            a/=10;
            b/=10;
            ++length;
        }
        String res = arr.toString();
        System.out.print(res);
    }
}