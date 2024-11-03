// https://codeforces.com/problemset/problem/445/A

#include<bits/stdc++.h>
using namespace std;
 
bool isGood(char c){
    return (c == '.');
}
 
int main(){
    int n, m;
    cin >> n >> m;
 
    vector<vector<char>> board(n, vector<char>(m));
 
    for(int i= 0; i< n; i++){
        for(int j= 0; j<m; j++){
            cin >> board[i][j];
            if(isGood(board[i][j])){
                if((i + j) % 2 == 0) {
                    board[i][j] = 'B';
                } else {
                    board[i][j] = 'W';
                }
            }
        }
    }
 
    for(auto &row : board){
        for(auto & ele : row){
            cout << ele;
        }
        cout << endl;
    }
 
    return 0;
}