#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n , m; cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '.'));
        int row = 0, column = 0;
        int rook = 0;
        while(row < n and column < m) { // grid er vitore asi 
            int row_te_baki = n - row;
            int column_te_baki = m - column;
            if(row_te_baki == 1 and column_te_baki == 1) {
                // 1 tai position baki 
                grid[row][column] = 'R';
                rook++;
                row++; column++;
                break;
            }
            if(row_te_baki > column_te_baki) { // row besi ache
                grid[row][column] = 'R';
                grid[row+1][column] = 'R';
                rook += 2;
                row += 2; column += 1;
            }
            else {
                grid[row][column] = 'R';
                grid[row][column+1] = 'R';
                rook += 2;
                column += 2; row += 1;
            }
        }
        cout << rook << endl;
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
}
