#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &i: a) cin >> i;
        long long ans = a[n-1] - a[n-2];
        for(int i=0;i<n-2;++i) {
            ans += abs(a[i]);
        }
        cout << ans << endl;
    }
}
