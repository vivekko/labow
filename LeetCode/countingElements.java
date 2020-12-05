class Solution {
    public int countElements(int[] arr) {
        HashSet<Integer> h = new HashSet<Integer>();
        for(int num:arr){
            h.add(num);
        }
        int count = 0;
        int n = arr.length;
        for(int i=0;i<n;i++){
            int st = arr[i];
            if(h.contains(st+1)){
                ++count;
            }
        }
        return count;
    }
}