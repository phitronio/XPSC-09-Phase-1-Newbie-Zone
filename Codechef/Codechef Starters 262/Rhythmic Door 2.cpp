#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0, i = 0;
        while(i < n) {
            if(s[i] == s[i+1] && s[i+1] == s[i+2]) {
                i+=3;
                ans++;
            }
            else i++;
        }
        cout << ans << endl;
    }
}
