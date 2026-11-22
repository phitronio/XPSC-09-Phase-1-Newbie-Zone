#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;
        int min_size = 1;
        for(int i=0;i<n-1;++i) {
            if(s[i] != s[i+1]) {
                min_size++;
            }
        }
        if(min_size <= k) cout << "YES\n";
        else cout << "NO\n";
    }
}
