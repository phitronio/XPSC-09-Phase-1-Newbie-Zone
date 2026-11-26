#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> a(n);
        long long total_sum = 0;
        multiset<long long> st;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            total_sum += a[i];
            st.insert(a[i]);
        }
        long long ans = 0;
        for(int i=0;i<n;i++) {
            // i ke double korbo
            // bakigula same
            long long sum = 0, mx = 0;
            st.erase(st.find(a[i])); // remove done
            st.insert(a[i] * 2); // updated value insert
            mx = *st.rbegin();
            sum = total_sum - a[i] + a[i] * 2;
            st.erase(st.find(a[i]*2)); // removing new value
            st.insert(a[i]); // adding previous value
            ans = max(ans, sum - mx);
        }
        cout << ans << endl;
    }
}
