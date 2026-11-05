#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        if(is_sorted(s.begin(), s.end())) {
            cout << 0 << endl;
            continue;
        }
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');
        if(s[n-1] == '0') {
            cout << one << endl;
            continue;
        }
        int ans = n;
        for(int i=0;i<n-1;++i) {
            // 0..i porjonto 0 hote hobe. -> one er count lagbe
            int cnt1 = 0;
            for(int j=0;j<i;++j) {
                if(s[j] == '1') cnt1++;
            }
            // i+1..n-1 porjonto 1 hote hobe. -> zero er count lagbe
            int cnt0 = 0;
            for(int j=i+1;j<n;++j) {
                if(s[j] == '0') cnt0++;
            }
            ans = min(ans, cnt1 + cnt0);
        }
        cout << ans << endl;
    }
}
