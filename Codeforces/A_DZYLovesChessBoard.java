import java.util.Scanner;

public class A_DZYLovesChessBoard {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int r = in.nextInt();
        int c = in.nextInt();
        String row = new String();
        char [][]chess = new char[r][c];
        for(int i=0;i<chess.length;i++)
            for(int j=0;j<chess[i].length;j++){
                if(j==0){
                 row = in.next();
                }
                chess[i][j] = row.charAt(j);
            }
        // if((chess[0].length & 1)==1)
        // {
        // for(int i=0;i<chess.length;i++)
        //     for(int j=0;j<chess[i].length;j++){
        //         if((j&1)==1 && chess[i][j] == '.')
        //             chess[i][j] = 'W';
        //         else if((j&1)!=1 && chess[i][j] == '.')
        //             chess[i][j] = 'B';
        //     }
        // }
        // else{
            for(int i=0;i<chess.length;i++)
            for(int j=0;j<chess[i].length;j++){
                if((i&1)==1){
                    if((j&1)==1 && chess[i][j] == '.')
                    chess[i][j] = 'W';
                else if((j&1)!=1 && chess[i][j] == '.')
                    chess[i][j] = 'B';
                }
                else{
                    if((j&1)==1 && chess[i][j] == '.')
                    chess[i][j] = 'B';
                else if((j&1)!=1 && chess[i][j] == '.')
                    chess[i][j] = 'W';
                }
            }

        // }
    // }
        for(int i=0;i<chess.length;i++){
        for(int j=0;j<chess[i].length;j++){
           System.out.print( chess[i][j]);
        }
        System.out.println("\n");
    }

        in.close();
        
    }
}