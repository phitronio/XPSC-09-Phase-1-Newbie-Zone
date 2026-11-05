#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b, d; cin >> a >> b >> d;
        long long ans = 0;
        long long x = a;
        long long y = b;
        while(true) {
            long long diff = abs(a-b);
            if(diff <= d) {
                ans = max(a,b);
                break;
            }
            long long nexta = a + x;
            long long nextb = b + y;
            if(nexta <= nextb) {
                a = nexta;
            } 
            else {
                b = nextb;
            }
        }
        cout << ans << endl;
    }
}