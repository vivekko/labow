import java.util.Scanner;

public class A_ThreePairwisemax {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int val1 = in.nextInt();
            int val2 = in.nextInt();
            int val3 = in.nextInt();
            int arr[] = new int[]{val1,val2,val3};
            int mx = Math.max(val1, val2);
            mx = Math.max(mx,val3);
            int count = 0;
            for(int i=0;i<3;i++){
                if(arr[i] == mx){
                    count++;
                }
            }
            if(count==2){
                System.out.println("YES");
                System.out.println(val1+ " "+ val2+" "+val3);
            }
            else
            System.out.println("NO");

        }
        in.close();
    }
}