#include <bits/stdc++.h>
using namespace std;

int main() {
    string ans = "NO";
    int x,k,y; cin >> x >> k >> y;
    for(int i=1;i<=x;++i) {
        if(i*k == y) {
            ans = "YES";
        }
    }
    cout << ans << endl;
}
