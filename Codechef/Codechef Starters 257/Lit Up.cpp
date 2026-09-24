#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(auto &i: a) cin >> i;
        int cost = 300;
        for(int i=0;i<n;++i) {
            for(int j=i+1;j<n;++j) {
                int l1 = i - k;
                int r1 = i + k;
                int l2 = j-k;
                int r2 = j+k;
                int cur_cost = a[i] + a[j];
                if(l1 <= 0 and r2 >= n-1 and l2<=r1+1 ) {
                    // valid light setting
                    cost = min(cost, cur_cost );
                }
            }
        }
        if(cost == 300) cost = -1;
        cout << cost << endl;
    }
}
