#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;++i) cin >> a[i];

        int q; cin >> q;
        while(q--) {
            string s; cin >> s;
            if(s.size() != n) {
                cout << "NO" << endl;
                continue;
            }
            map<int, vector<int>> num_occ;
            map<char, vector<int>> char_occ;
            // number occ
            for(int i=0;i<n;++i) {
                num_occ[a[i]].push_back(i);
            }
            // char occ
            for(int i=0;i<s.size();++i) {
                char_occ[s[i]].push_back(i);
            }
            string ans = "YES";
            map<int, int> counted;
            for(int i=0;i<n;++i) {
                if(counted[a[i]] > 0) {
                    continue;
                } else {
                    counted[a[i]]++;
                }
                if(num_occ[a[i]] != char_occ[s[i]]) {
                    ans = "NO";
                    break;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}