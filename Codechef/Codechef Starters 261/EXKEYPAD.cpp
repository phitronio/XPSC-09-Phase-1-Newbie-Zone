#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc; cin >> tc;
	
	while(tc--){
	    string s;
	    cin >> s;
	    char D;
	    cin >> D;
	    
	    int n = s.size();
	    int pos = 1e9;
	    for(int i=0; i<n; i++){
	        if(s[i]==D){
	            pos = i; 
	            break;
	        }
	    }
	    
	    if(pos==(int)1e9){
	        cout << s << endl;
	        continue;
	    }
	    
	    if(D!='9'){
	        s[pos]++;
	        for(int i=pos+1; i<n; i++){
	            if(D!='0') s[i]='0';
	            else s[i]='1';
	        }
	    }
	    else{
	        for(int i=pos+1; i<n; i++){
	            s[i]='0';
	        }
	        
	        s[pos]='0';
	        pos--;
	        while(pos>=0 && s[pos]=='8'){
	            s[pos]='0';
	            pos--;
	        }
	        if(pos>=0) s[pos]++;
	        else{
	            s = '1' + s;
	        }
	       
	    }
	    
	    cout << s << endl;
	    
	}

}
