#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        int total = 0;
        for(int i=0;i<n;++i) {
            cin >> a[i];
            total += a[i];
        }
        int min_discount = 2e9;
        for(int i=0;i<n-1;++i) {
            min_discount = min(min_discount, (a[i]/2 + a[i+1]/2));
        }
        cout << total - min_discount << endl;
    }
}
