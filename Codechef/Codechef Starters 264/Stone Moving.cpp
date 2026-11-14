#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+5];
        for(int i=1;i<=n;++i) {
            cin >> a[i];
        }
        long long ans = 0;
        a[0] = 0;
        vector<int> increment(n+5);
        
        for(int i=1;i<=n;++i) {
            increment[i] += increment[i-1];
            a[i] += increment[i];
            int move = min(a[i], n - i);
            ans += move;
            int L = i+1;
            int R = i+move;
            // cout << L << " " << R << endl;
            increment[L]++;
            increment[R+1]--;
            // for(int j=i+1;j<=n;++j) {
            //     if(move == 0) break;
            //     a[j]++;
            //     move--;
            // }
        }
        cout << ans << endl;
    }
}
