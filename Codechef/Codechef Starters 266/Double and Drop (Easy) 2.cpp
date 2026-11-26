#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        long long ans = 0;
        for(int i=0;i<n;i++) {
            // i ke double korbo
            // bakigula same
            auto b = a;
            b[i] = b[i] * 2 ;
            long long sum = 0, mx = 0;
            for(int j=0;j<n;j++) {
                sum += b[j];
                mx = max(mx, b[j]);
            }
            ans = max(ans, sum - mx);
        }
        cout << ans << endl;
    }
}
