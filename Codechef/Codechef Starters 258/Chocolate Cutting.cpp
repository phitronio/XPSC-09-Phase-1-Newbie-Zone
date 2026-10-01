#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >>m;
        if(n*m % 2 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}
