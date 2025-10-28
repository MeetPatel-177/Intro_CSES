/**
 *    author:  Meet
 *    created: 27.10.2025 16:00:55
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll INF = 1e18;
const ll MINF = -1e18;
const ll M = 1e9 + 7;
//const ll M = 998244353;
const ll M1 = 111053273;
const ll M2 = 4011052531;
#define PI acos(-1)

#define whole(x) (x).begin(), (x).end()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define minus cout << -1 << "\n"

vector<ll> pow10;

void compute() {
    pow10.assign(19,0);
    pow10[0] = 1;
    for(ll i=1; i<19; ++i) pow10[i] = (pow10[i-1] * 10);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    compute();

    ll t = 1;
    cin >> t;
    while(t--) {
        ll k;
        cin >> k;

        ll dig = 1, len = 9;

        while(k > dig*len) {
            k -= dig*len;
            ++dig;
            len *= 10;
        }
        
        ll num = (pow10[dig-1] - 1) + (k+dig-1)/dig;

        ll numdig = k%dig;

        if(numdig == 0) numdig += dig;

        num /= (pow10[dig-numdig]);

        ll ans = num%10;

        cout << ans << "\n";
    }
    return 0;
}