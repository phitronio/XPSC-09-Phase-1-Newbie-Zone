#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        long long l = 0;
        long long r = 2e9;
        long long ans = -1;
        while(l<=r) {
            long long mid = (l +r ) / 2;
            long long x = mid ;
            auto b = a;
            long long s = 0;
            for(int i=0;i<n;++i) {
                if(b[i] >= x) {
                    s += b[i] - x;
                    b[i] = x;
                }
                else {
                    long long mn = min(s, x-b[i]);
                    b[i] += mn;
                    s -= mn;
                }
            }
            if(is_sorted(b.begin(), b.end())) {
                l = mid + 1;
                ans = mid;
            }
            else {
                r = mid - 1;
            }
        }
        if(ans == 2e9) ans = -1;
        cout << ans << endl;
    }
}
