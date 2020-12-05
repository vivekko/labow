import java.util.ArrayList;
// import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;
public class A_OmkarAndPass {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            // solve();
            int n = in.nextInt();
            // int arr[] = new int[n];
            List<Integer>arr = new ArrayList<>();
            for(int i=0;i<n;i++){
                
                int val = in.nextInt();
                arr.add(val);
            }
            if(arr.size()>2){
            for(int i=0;i<arr.size()-1;i++){
                if(!arr.get(i).equals(arr.get(i+1))){
                   arr.set(i,  arr.get(i) + arr.get(i+1)) ;
                   arr.remove(i+1);
                   i=0;
                }
            }
        }
            if(arr.size()==2)
            if(!arr.get(0).equals(arr.get(1))){
                arr.remove(1);
            }
            System.out.println(arr.size());

        }
        in.close();
    }
}
