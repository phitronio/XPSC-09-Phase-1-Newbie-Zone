#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0, streak = 1;
        for(int i=1;i<n;++i) {
            if(s[i] == s[i-1]) {
                streak++;
                if(streak == 3) {
                    ans++;
                    streak=0;
                }
            }
            else {
                streak = 1;
            }
        }
        cout << ans << endl;
    }
}
