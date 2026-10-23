#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc; cin >> tc;
	
	while(tc--){
	    int n,s;
	    cin >>n >> s;
	    
	    int ans=INT_MAX ;
	    for(int i=0; i<=n; i++){
	        int attempt = i;
	            
	        for(int correct=0; correct<=attempt; correct++){
	            int wrong = attempt - correct;
	            
	            int scrore = 4*correct - wrong;
	            if(scrore==s){
	                ans = min(ans, attempt);
	            }
	        }
	    }
	    
	    if(ans>=(int)1e9) ans=-1;
	    cout << ans << endl;
	}

}
