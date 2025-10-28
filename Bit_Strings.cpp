#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define whole(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

void setupIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

ll mypow(ll m, ll n) {
    if(n == 0) return 1;
    if((n & 1) == 0) {
        return (mypow((m*m)%M, (n/2)%M))%M;
    }else {
        return (m*mypow((m*m)%M, (n/2)%M))%M;
    }
}
int main() {
    setupIO();
    int n;
    cin >> n;
    ll ans = mypow(2, n);
    cout << ans << "\n";
    return 0;
}