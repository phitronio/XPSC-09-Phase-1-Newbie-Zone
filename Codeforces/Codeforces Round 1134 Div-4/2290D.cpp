#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
      int n;
      cin >> n;
      string s;
      cin >> s;

      int cnt=0;
      for(char x='z'; x>='b'; x--){ // O(25)
         bool flg = false;
         for(int i=0; i<n; i++){ // O(n)

            if(s[i]==x && s[i] != s[n-1-i]){
               flg=true;
               break;
            }
         }

         if(flg){
            cnt++;
            for(int i=0; i<n; i++){ // O(n)
               if(s[i]==x){
                  s[i]--; // previous character
               }
            }
         }

      }

      // tc : O(25 *(n+n))

      cout << cnt << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */