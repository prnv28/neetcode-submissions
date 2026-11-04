class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    bool checkRow(int i, vector<vector<char>>& board){
        set<char> st;
        for(int j=0;j<9;j++){
            if(st.find(board[i][j])!=st.end()){
                return false;
            }else{
                if(board[i][j]!='.'){
                    st.insert(board[i][j]);
                }
            }
        }
        return true;
    }
    bool checkColumn(int i, vector<vector<char>>& board){
        set<char> st;
        for(int j=0;j<9;j++){
            if(st.find(board[j][i])!=st.end()){
                return false;
            }else{
                if(board[j][i]!='.'){
                    st.insert(board[j][i]);
                } 
            }
        }
        return true;
    }
    bool checkSquare(int i,int j, vector<vector<char>>& board){
        set<char> st;
        for(int m=i;m<i+3;m++){
            for(int n=j;n<j+3;n++){
                if(st.find(board[m][n])!=st.end()){
                    return false;
                }else{
                    if(board[m][n]!='.'){
                        st.insert(board[m][n]);
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            if(!checkRow(i,board)){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(!checkColumn(i,board)){
                return false;
            }
        }
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(!checkSquare(i,j,board)){
                    return false;
                }
            }
        }
        return true;
    }
};
