import java.util.HashSet;

class SingleNumber {
    public int singleNumber(int[] nums) {
        HashSet<Integer> h = new HashSet<>();
        for(int num:nums){
            h.add(num);
        }
        int val=0;
        for(int i=0;i<nums.length;i++)
        {
            if(!h.contains(nums[i]))
                val = nums[i];
        }
        return val;
    }
}