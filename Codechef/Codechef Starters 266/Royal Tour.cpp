#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long N, M; cin >> N >> M;
        long long r, c; cin >> r >> c;
        
        // fixed move -> from one corner
        long long fixed = min(N-1, M-1) * 2 + max(N-1, M-1) * 1;
        // cout << "Fixed = " << fixed << endl;
        // 1 1 corner e first e jabo
        long long ans1 = max(abs(r - 1), abs(c - 1)) + fixed;
        // 1 M corner e first e jabo
        long long ans2 = max(abs(r - 1), abs(c - M)) + fixed;
        // N 1 corner e first e jabo
        long long ans3 = max(abs(r - N), abs(c - 1)) + fixed;
        // N M corner e first e jabo
        long long ans4 = max(abs(r - N), abs(c - M)) + fixed;
        cout << min({ans1, ans2, ans3, ans4}) << endl;
    }
}
