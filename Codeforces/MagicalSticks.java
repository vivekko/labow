import java.util.Scanner;

public class MagicalSticks {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t =in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            if((n&1)==1)
                System.out.println((n+1)/2);
            else
                System.out.println(n/2);
        }
        in.close(); 
    }
}

// 10 MagicalSticks
// 1 2 3 4 5 6 7 8 9 10
// 9+1 10 8+2 7+3 6+4  n/2

// 1 MagicalSticks
// 1 
// 1

// 2 MagicalSticks
// 1 2                  n/2
// 1
// 3 MagicalSticks
// 1 2 3                n+1/2
// 3 3
// 4 MagicalSticks      n/2
// 1 2 3 4 
// 1+3 

//  11 Ms
//  1 2 3 4 5 6 7 8 9 10 11
//   10+1 9+2 8+3 7+4 6+5 11
// n-1/2
// //  3 
// //  1 2 3
// // 4
// 1 2 3 4
// 17

