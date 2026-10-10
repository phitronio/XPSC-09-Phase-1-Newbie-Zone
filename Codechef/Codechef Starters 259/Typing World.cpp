#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int m; cin >> m;
        string a, b; cin >> a >> b;
        int L = 0, R = 0;
        int ans = 0;
        for(int i=0;i<n;++i) {
            if(b.find(a[i]) != -1) {
                L++;
                R = 0;
            } else {
                R++;
                L = 0;
            }
            ans = max(ans, L);
            ans = max(ans, R);
        }
        cout << ans << endl;
    }
}
