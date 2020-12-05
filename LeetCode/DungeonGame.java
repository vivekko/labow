public class DungeonGame {

        public static void main(String[] args) {
            int[][] d = {{-2 , 3, -3},
                        {-5,-10,1},{10, 30,-5}};
            int ret = calculateMinimumHP(d);
            System.out.println(ret); 
        }

        static int calculateMinimumHP(int dungeon[][]) {
           // while()
            int i = 0,j = 0;
            int sum = dungeon[0][0];
            while(i!=dungeon.length-1 || j!=dungeon[0].length-1){
               
                if(j!=dungeon[0].length-1){
                    if(dungeon[i+1][j]>dungeon[i][j+1]){
                    sum = sum + dungeon[i+1][j];
                    i++;
                }
                else{
                     sum = sum + dungeon[i][j+1];
                     j++;
                }
                }
                else 
                {
                     sum = sum + dungeon[i+1][j];
                     i++;
                }
                
                
            }
            // System.out.println(sum);
           int ret = Math.abs(sum) + 1;
            return ret;
        }
    }
