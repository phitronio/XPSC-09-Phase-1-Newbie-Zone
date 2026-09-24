#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int work = 0, Time = 0;
        while(work < n) {
            Time++;
            if(Time % k == 0) {
                continue;
            }
            else {
                work++;
            }
        }
        cout << Time << endl;
    }
}
