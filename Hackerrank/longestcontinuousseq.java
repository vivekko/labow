import java.util.*;
import java.lang.*;
public class longestcontinuousseq
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
            arr[i] = input.nextInt();
        lcs(arr);
        input.close();
    }

    static void lcs(int nums[]) {
        HashSet<Integer> h  = new HashSet<Integer>();
        for(int num:nums){
            h.add(num);
        }
        int maxsl=0;
    for(int i=0;i<nums.length;i++){
        int cnum = nums[i];
        int cseqlen = 1;
        if(!h.contains(cnum - 1)){
            while (h.contains(cnum+1)) {
                cnum = cnum + 1;
                cseqlen = cseqlen + 1;
            }
        }
    
    maxsl = Math.max(maxsl, cseqlen);
    }    
    System.out.print(maxsl);
}
}