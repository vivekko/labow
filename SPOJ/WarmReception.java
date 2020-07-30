import java.util.Scanner;
// import javafx.util.Pair; 
public class WarmReception {

	
	public static void main(String[] args) {
        // Write your code here
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int entry[] = new int[n];
        int exit[] = new int[n];
        for(int i=0;i<n;i++){
            entry[i] = in.nextInt();
        }
        for(int i=0;i<n;i++){
            exit[i] = in.nextInt();
        }
        int maxg = 0;
        int chair = 1;
        int flag = 0;
        for(int i=1;i<n;i++){
            for(int j = 0;j<i;j++){
                if(entry[i]>exit[j]){
                    flag = 1;
                    if(chair==0)
                        break;
                    chair--;
                }
            }
            if(flag==0)
                chair++;
            maxg = Math.max(chair,maxg);
        }
        System.out.println(maxg);
        in.close();

	}

}
// 900 1900
// 	1000 1300
//     	 1100 1130
//     		  1600 1800
    				