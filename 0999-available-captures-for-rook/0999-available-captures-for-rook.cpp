class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r,c, i, j, ans = 0;
        //Find the position of Rook
        for(i = 0; i < 8; i ++){
            for(j = 0; j < 8; j ++){
                if(board[i][j] == 'R'){
                    r = i;
                    c = j;
                    goto stop;
                }
            }
        }
        stop:
        // Traverse Right
        for(j = c; j < 8; j ++){
            if(board[r][j] == 'p'){
                ans++;
                break;
            }
            else if(board[r][j] == 'B')
                break;
        }
        // Traverse Left
        for(j = c; j >= 0; j --){
            if(board[r][j] == 'p'){
                ans++;
                break;
            }
            else if(board[r][j] == 'B')
                break;
        }
        // Traverse Up
        for(i = r; i >=0; i --){
            if(board[i][c] == 'p'){
                ans++;
                break;
            }
            else if(board[i][c] == 'B')
                break;
        }
        // Traverse Down
        for(i = r; i < 8; i ++){
            if(board[i][c] == 'p'){
                ans++;
                break;
            }
            else if(board[i][c] == 'B')
                break; 
        }
        
        return ans;
    }
};