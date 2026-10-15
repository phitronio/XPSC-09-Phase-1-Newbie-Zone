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
        sort(a, a+n);
        // max - 2nd min
        int opt1 = a[n-1] - a[1];
        // 2nd max - min
        int opt2 = a[n-2] - a[0];
        cout << min(opt1, opt2) << endl;
    }
}
