#include <bits/stdc++.h>
using namespace std;

#define ll long long

void clr_switch(char &c){
   if(c=='R') c='B';
   else c='R';
}

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
      int n;
      cin >> n;

      string s;
      cin >> s;

      int cnt=0;
      char clr='R';
      for(int i=0; i<n; i++){
         // Manual switch
         if(clr!=s[i]){
            clr_switch(clr);
            cnt++;
         }
         
         // by-default switch 
         clr_switch(clr);
      }

      cout << cnt << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */