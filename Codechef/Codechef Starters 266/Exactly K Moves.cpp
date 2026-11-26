#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t-- ) {
        int n, k; cin >> n >> k;
        if(k <= n and n <= 2*k) cout << "YES\n";
        else cout << "NO\n";
    }
}
