#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n = 2e6;

int main() {
	vector<ll> a(n);
	a[1]=1;
	for(int i=1; i+1<n; i++){
	    a[i+1] = a[i]+i;
	}
	
	vector<ll> prefix_sum(n);
	for(int i=1; i<n; i++){
	    prefix_sum[i] = prefix_sum[i-1]+a[i];
	}
	
	
	int tc;
	cin >> tc;
	while(tc--){
	    ll N; cin >> N;
	    
	    int pos = upper_bound(prefix_sum.begin(), prefix_sum.end(), N) - prefix_sum.begin();
	    
	    cout << pos-1 << endl;
	}

}
