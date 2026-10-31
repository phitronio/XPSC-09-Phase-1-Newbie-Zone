#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n]; 
        for(int i=0;i<n;++i) cin >> a[i];
        int initialAns = 0;
        for(int i=1;i<n;++i) {
            if(a[i] == a[i-1]) initialAns++;
        }
        // ans +2 kora jay kina
        // fist e -1 lagbe then +1 lagbe
        int pos = -1;
        for(int i=1;i<n;++i) {
            if(a[i] - a[i-1] == -1) {
                pos = i;
                break;
            }
        }
        if(pos != -1) {
            int ok = 0;
            for(int i=pos+1;i<n;++i) {
                if(a[i] - a[i-1] == 1) {
                    ok = 1;
                    break;
                }
            }
            if(ok == 1) {
                cout << initialAns + 2 << endl;
                continue;
            }
        }
        for(int i=1;i<n;++i) {
            if(a[i]-a[i-1] == 1 || a[i]-a[i-1] == -1) {
                initialAns++;
                break;
            }
        }
        cout << initialAns << endl;
    }
    
}
