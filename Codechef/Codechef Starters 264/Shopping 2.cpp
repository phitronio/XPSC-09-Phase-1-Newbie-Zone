#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int d; cin >> d;
        int a[n];
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        int b[n];
        for(int i=0;i<n;++i) {
            cin >> b[i];
        }
        // 1st option -> buy all from shop 1 + D
        int sum1 = d;
        for(int i=0;i<n;++i) {
            sum1 += a[i];
        }
        // 2nd option -> buy all from shop 2 + D 
        int sum2 = d;
        for(int i=0;i<n;++i) {
            sum2 += b[i];
        }
        // 3rd option -> both shop + 2*D 
        int sum3 = 2*d;
        for(int i=0;i<n;++i) {
            sum3 += min(a[i], b[i]);
        }
        cout << min({sum1, sum2, sum3}) << endl;
    }
}
