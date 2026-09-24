#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        int sum = 0, mn = 0, mn_idx = -1;
        for(int i=0;i<n;++i) {
            sum += a[i];
            if(mn > a[i]) {
                mn = a[i];
                mn_idx = i;
            }
            if(sum < 0) {
                break;
            }
        }
        // mn_idx skip korte hobe
        sum = 0;
        string ans = "YES";
        for(int i=0;i<n;++i) {
            if(i == mn_idx) continue; // eita delete
            sum += a[i];
            if(sum < 0) {
                ans = "NO";
            }
        }
        cout << ans << endl;
    }
}
