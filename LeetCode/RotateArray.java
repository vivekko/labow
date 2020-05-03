public class RotateArray {
    public void rotate(int[] nums, int k) {
        int arr[] = new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
         arr[i]  = nums[i];  
        }
        int j= nums.length;
        for(int i=0;i<j;i++)
        {
           if((i+k)<j)
               nums[i+k] = arr[i];
           else if(i+k==j)
           { 
               nums[0] = arr[i];
           }
            else 
                nums[(i+k)%j] = arr[i];
               
                
        }
        // for(int num:nums)
        // {
        //     System.out.println(num);
        // }
    }
}

// 6
// 0 1 2 3 4 5 (4,6)
// 7%6
// 10%6
          