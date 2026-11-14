#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n+1];
        for(int i=1;i<=n;++i) {
            cin >> a[i];
        }
        multiset<int> positive, hold;
        for(int i=1;i<=n;++i) {
            hold.insert(a[i]);
            if(i % 2 == 1) {
                // max ta positive e nibo
                int mx = *hold.rbegin();
                positive.insert(mx);
                hold.erase(hold.find(mx));
            }
        }
        int pos_sum = 0, neg_sum = 0;
        for(auto i: positive) pos_sum += i;
        for(auto i: hold) neg_sum += i;
        cout << pos_sum - neg_sum << endl;
    }
}
