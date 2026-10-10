#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        int a1 = 0, b1 = 0;
        for(int i=0;i<n;++i) {
            if(a[i] == '1')a1++;
        }
        for(int i=0;i<n;++i) {
            if(b[i] == '1') b1++;
        }
        if(a1 % 2 == b1 % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
