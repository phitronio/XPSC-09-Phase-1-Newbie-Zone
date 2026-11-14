#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        for(int i=1;i<n;++i) {
            string cur = "";
            cur += s[i-1];
            cur += s[i];
            // cout << cur << endl;
            int cur_num = stoi(cur);
            if(cur_num % 4 == 0) {
                ans++;
            }
        }
        string cur = "";
        cur += s[n-1];
        cur += s[0];
        // cout<<cur << endl;
        int cur_num = stoi(cur);
        if(cur_num % 4 == 0) {
            ans++;
        }
        cout << ans << endl;
    }
}
