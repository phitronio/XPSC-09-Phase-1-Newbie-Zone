#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;++i) {
            cin >> a[i];
        }
        set<int> prev_seg, cur_seg;
        prev_seg.insert(a[0]);
        int ans = 1;
        for(int i=1;i<n;++i) {
            int val = a[i];
            if(prev_seg.find(val) != prev_seg.end()) {
                // ache
                prev_seg.erase(val);
            }
            cur_seg.insert(val);
            if(prev_seg.empty()) {
                // new segment peye gesi
                ans++;
                prev_seg = cur_seg;
                cur_seg.clear();
            }
        }
        cout << ans << endl;
    }
    return 0;
}