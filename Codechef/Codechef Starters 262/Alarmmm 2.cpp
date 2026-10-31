#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int i=n-1, ans = 0;
        while(i >= 0) {
            if(s[i] == '1') {
                // k samne alarm bosabo
                i -= k;
                ans++;
            }
            i--;
        }
        cout << ans << endl;
    }
}
