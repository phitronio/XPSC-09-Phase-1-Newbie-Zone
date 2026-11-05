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
        int odd = 0;
        for(int i=0;i<n;++i) {
            if(a[i] % 2 == 1) {
                odd++;
            }
        }
        if(odd % 2 == 0) {
            cout << n << endl;
        }
        else {
            // 2ta option
            // suru theke 1ta bad  /  sesh theke 1ta bad
            int starting = 0;
            for(int i=0;i<n;++i) {
                starting++;
                if(a[i] % 2 == 1) {
                    break;
                }
            }
            int ending = 0;
            for(int i=n-1;i>=0;--i) {
                ending++;
                if(a[i] % 2 == 1) {
                    break;
                }
            }
            int ans = max(n - starting, n - ending);
            cout << ans << endl;
        }
    }
}
