#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
      int n;
      cin >> n;
      vector<int> a(n);
      for(int i=0; i<n; i++) cin >> a[i];

      sort(a.begin(), a.end());
      
      vector<int> left, right;
      left.push_back(a[0]);
      for(int i=1; i<n; i++){
         if(a[i-1]==a[i]) right.push_back(a[i]);
         else left.push_back(a[i]);
      }

      sort(left.begin(), left.end()); // increasing
      sort(right.rbegin(), right.rend()); // decreasing

      vector<int> ans;
      for(auto it: left) ans.push_back(it);
      for(auto it: right) ans.push_back(it);

      int cnt=1;
      for(int i=1; i<n; i++){
         if(i==n-1 || ans[i]>ans[i-1] || ans[i]>ans[i+1]){
            cnt++;
         }
      }

      cout << cnt << endl;
      for(int i=0; i<n; i++){
         cout << ans[i] << " ";
      }
      cout << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */