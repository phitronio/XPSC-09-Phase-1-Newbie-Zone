#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin>> n >> k;
        int a[n];
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        // max value
        int opt1 = a[n-1];
        // min 2 ta value
        int opt2 = a[0] + a[1];
        cout << max(opt1, opt2) << endl;
    }
}
