#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
      int n,k;
      cin >> n >> k;

      vector<ll> a(n);
      for(auto &i: a) cin >> i;

      ll window=0;
      string move="Alice";
      vector<ll> suf(n+1);

      for(int i=n-1; i>=0; i--){
         if(i+1<n) window += suf[i+1];
         if(i+k+1<n) window -= suf[i+k+1];

         suf[i] = (a[i] + window)%2;
         if(suf[i]==1){
            if(move=="Alice") move="Bob";
            else move="Alice";
         }
      }


      if(move=="Alice") cout << "Bob" << endl;
      else cout << "Alice" << endl; 


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */