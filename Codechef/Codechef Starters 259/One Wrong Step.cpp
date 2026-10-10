#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<n;++i) {
            if(s[i] == 'L') l++;
            if(s[i] == 'R') r++;
            if(s[i] == 'U') u++;
            if(s[i] == 'D') d++;
        }
        if(l == r and abs(u-d) == 2) {
            cout << "YES" << endl;
        } else if(u == d and abs(l-r) == 2) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
