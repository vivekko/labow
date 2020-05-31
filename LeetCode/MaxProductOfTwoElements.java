class Solution {
    public int maxProduct(int[] nums) {
        int length = nums.length;
        Arrays.sort(nums);
        return ((nums[length-1]-1)*(nums[length-2]-1));
    }
}