#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans=0;
        int lastval = 0;
        for(long long i=1;i<=sqrt(n);i++)
        {
            ans+=(n/i)-1;
            lastval = n/i;
            // cout << i << " -> " << (n/i)-1 << endl;
        }
        for(int i=1;i<lastval;++i) {
            int st = n/(i+1);
            int ed = n/i;
            // cout << st << "  " << ed << endl; 
            if(st < ed) {
                int ran = ed - st;
                ans += ran * (i-1); 
            }
        }
        cout<<ans<<endl;
    }
}
