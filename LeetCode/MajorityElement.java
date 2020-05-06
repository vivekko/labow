import java.util.ArrayList;
import java.util.List;

public class MajorityElement {
    public int majorityElement(int[] nums) {
           List<Integer> h = new ArrayList<Integer>();
        for(int num:nums){
            h.add(num);
            // ++i;
        } 
        int val = 0;
        int r=0, maxx = 0;
        int e =nums[0];
        for(int j=0;j<nums.length;j++){
            // r=0;
            // int e= nums[j];
            // for(int k=0;k<nums.length;++k){
            if(h.contains(e)){
                ++r;
                h.remove(new Integer(e));
            }
            else
            {
                if(r>maxx)
                    val = e;
                e = nums[j];
                maxx = Math.max(maxx, r);
                 
            }
            if(r>nums.length/2)
                return e;
           
            // maxx = Math.max(maxx, r);
            
        }
        return val;
    }
}
