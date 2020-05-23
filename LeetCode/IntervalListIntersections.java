class Solution {
    public int[][] intervalIntersection(int[][] A, int[][] B) {
           List<int[]> l = new ArrayList<>();
           int i = 0, j = 0;
           while(i < A.length && j < B.length){
               int maxS = Math.max(A[i][0], B[j][0]);
               int minE = Math.min(A[i][1], B[j][1]);
               if(maxS <= minE){
                   l.add(new int[]{maxS, minE});
               }
               if(A[i][1] < B[j][1]){
                   i++;
               }
               else{
                   j++;
               }
           }
           
           int[][] res = new int[l.size()][2];
           i = 0;
           for(int[] arr : l){
               res[i++] = arr;
           }
           
           return res;
       }
   }