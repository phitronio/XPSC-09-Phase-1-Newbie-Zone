#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int m; cin >> m;
        int k; cin >> k;
        int a[m];
        vector<int> visited(n+1);
        for(int i=0;i<m;++i) {
            cin >> a[i];
            visited[a[i]] = 1;
        }
        int cur = 1;
        while(k--) {
            while(visited[cur] != 0) {
                cur++;
            }
            visited[cur] = 1;
            cout << cur << ' ';
        }
        cout << endl;
    }
}
