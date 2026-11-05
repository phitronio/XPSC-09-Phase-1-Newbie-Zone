#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        char s[n][m];
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                cin >> s[i][j];
            }
        }
        int xmax=0, ymax = 0, xmin = 1e9, ymin = 1e9;
        for(int i=0;i<n;++i) {
            for(int j=0;j<m;++j) {
                if(s[i][j] == '1') {
                    xmax = max(i, xmax);
                    xmin = min(i, xmin);
                    
                    ymax = max(j, ymax);
                    ymin = min(j, ymin);
                }
            }
        }
        int length = xmax - xmin+1;
        int width = ymax - ymin+1;
        int area = length * width;
        cout << area << endl;
    }
}
