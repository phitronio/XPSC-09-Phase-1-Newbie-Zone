#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b ; cin >> a >> b;
    int first = 3*a;
    int second = a + b;
    cout << min(first, second) << endl;
}
