#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        int l = 0, r = n-1;
        int flag = 0;
        while(l < r) {
            if(a[l] != a[r]) {
                flag = 1; // not palindrome
                break;
            }
            else {
                l++, r--;
            }
        }
        if(flag == 0) {
            // palindrome 
            cout << "NO\n";
        }
        else {
            // not palindrome
            // find any missing value
            set<int> st;
            for(auto i: a) {
                st.insert(i);
            }
            int ans = n;
            for(int i=1;i<=n;++i) {
                if(st.find(i) == st.end()) {
                    // missing
                    ans = i;
                    break;
                }
            }
            cout << "YES " << ans << endl;
        }
    }
}
