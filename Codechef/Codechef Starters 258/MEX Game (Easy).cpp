#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;++i) cin >> a[i];
        map<int, int> cnt;
        for(auto i: a) {
            cnt[i]++;
        }
        int mex = 0;
        while(cnt[mex] > 0) {
            mex++;
        }
        int ans = 0;
        for(auto [val, c]: cnt) {
            if(val < mex) {
                int dupli = c - 1;
                ans += dupli * val;
            }
            if(val > mex) {
                int upd = mex + 1;
                int one_element = val - upd;
                ans += one_element * c;
            }
        }
        if(ans % 2 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }
}
