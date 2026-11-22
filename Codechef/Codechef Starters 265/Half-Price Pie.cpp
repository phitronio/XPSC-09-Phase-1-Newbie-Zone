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
        for(int fixed = 0; fixed < n - 1 ; fixed++) {
            int first = fixed; // half price
            int second = fixed + 1; // half price
            int sum = 0;
            for(int i=0;i<n;++i) {
                if(i == first || i == second) {
                    sum += a[i] / 2;
                }
                else {
                    sum += a[i];
                }
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
}
