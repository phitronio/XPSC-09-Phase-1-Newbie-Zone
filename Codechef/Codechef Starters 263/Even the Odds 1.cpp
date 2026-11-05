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
        int ans = 0;
        for(int l = 0;l<n;++l) {
            for(int r = l; r<n;++r) {
                // l..r range e koyta odd ase dekhte hobe
                int odd = 0;
                for(int i=l;i<=r;i++) {
                    if(a[i] % 2 == 1) {
                        odd++;
                    }
                }
                int sz = r - l + 1;
                if(odd % 2 == 0) {
                    ans = max(ans, sz);
                }
            }
        }
        cout << ans << endl;
    }
}
