#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if(n < 5) cout << n << endl;
    else {
        int ans = 1; n -= 5;
        ans += n;
        cout << ans << endl;
    }
}
