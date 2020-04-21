
class Solution {
    public int removeDuplicates(int[] nums) {
        HashSet<Integer> h = new HashSet<Integer>();
        int n = nums.length;
        int k=0;
        for(int i=0;i<n;i++){
            if(!h.contains(nums[i]))
            {
                nums[k++] = nums[i];
                h.add(nums[i]);
            }
        }
        return k;
    }
}