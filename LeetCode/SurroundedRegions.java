public class SurroundedRegions {
    public static void solve(char[][] board) {
        int c = board[0].length;
        int l = board.length;
        for (int i = 1; i < l - 1; i++)
            for (int j = 1; i < c - 1; i++) {
                if (i == 1) {
                    if (board[i][0] != '0' && board[i][c - 1] != '0' && board[0][j] != '0' && board[i][l-1]!='0')
                        board[i][j] = 'X';
                } else if (i == l - 2) {
                    if (board[i][0] != '0' && board[i][c - 1] != '0' && board[l - 1][j] != '0')
                        board[i][j] = 'X';
                } else {
                    if (board[i][0] != '0' && board[i][c - 1] != '0' && board[i][l-1]!='0')
                        board[i][j] = 'X';
                }

            }
    }

    public static void main(String[] args) {
        // char [][]board;
        char board[][] = new char[][] { 
            new char[] { 'X', 'X', 'X' ,'X' }, 
            new char[] { 'X', '0', '0', 'X'},
            new char[] { 'X', 'X', '0', 'X'}, 
            new char[] { 'X', 'X', 'X', 'X'}, 
        };
        solve(board);

    }
}