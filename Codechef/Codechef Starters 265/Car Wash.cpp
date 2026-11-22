#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        vector<pair<int, int>> vp(k);
        for(int i=0;i<k;++i) {
            cin >> vp[i].first >> vp[i].second;
        }
        sort(vp.begin(), vp.end());
        vector<int> jam;
        for(auto [x,y]: vp) {
            // x -> car number 
            // y -> jam location 
            auto it = upper_bound(jam.begin(), jam.end(), y);
            if(it == jam.end()) {
                // pore jam nei 
                jam.push_back(y);
            }
            else {
                // pore jam ache 
                *it = y;
            }
        }
        int initial_ans = n + m - 1;
        int extra = jam.size();
        cout << initial_ans + extra << endl;
    }
}
