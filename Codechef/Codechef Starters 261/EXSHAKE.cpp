#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll calc(ll p){
    ll val = p*(p-1)/2;
    return val;
}

int main() {
	int tc; cin >> tc;
	
	while(tc--){
	    ll n,m; cin >>n >> m;
	    
	    vector<ll> a(n);
	    for(auto &i: a) cin >>i;
	    
	    sort(a.begin(), a.end());
	    
	    int grp=0;
	    ll people=0;
	    for(int i=0; i<n; i++){
	        people += a[i];
	        ll val = calc(people);
	        if(val>m) break;
	        else grp++;
	    }
	    
	    cout << grp << endl;
	    
	}

}
