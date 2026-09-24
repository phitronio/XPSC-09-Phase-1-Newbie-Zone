#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int Time = 0;
        if(n < k) Time = n;
        else {
            int Free = k - 1;
            int remWork = n - Free;
            Time += ceil(1.0 * (remWork * k) / (k-1));
            Time += Free;
        }
        cout << Time << endl;
    }
}
