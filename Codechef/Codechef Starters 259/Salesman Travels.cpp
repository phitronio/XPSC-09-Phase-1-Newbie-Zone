#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> even, odd;
        for(int i=1;i<=n;++i) {
            if(i%2==0) even.push_back(i);
            else odd.push_back(i);
        }
        reverse(odd.begin(), odd.end());
        for(int i=0;i<odd.size();++i) cout << odd[i] << " ";
        for(int i=0;i<even.size();++i) cout << even[i] << " ";
        cout << endl;
    }
}
