#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        
        int ans = a[0];
        for(int i=1;i<n;i++) {
            if(k > 0) {
                ans += a[i];
                k--;
            }
        }
        cout << ans << endl;
    }
}
