/**
 *    author:  Meet
 *    created: 27.10.2025 11:12:03
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

vector<ll> arr;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t = 1;
    cin >> t;
    while(t--) {
        ll n,a,b;
        cin >> n >> a >> b;

        if(max(a,b) == n || (a+b) > n) {
            no;
            continue;
        }

        if(min(a,b) == 0 && max(a,b) != 0) {
            no;
            continue;
        }

        vector<ll> pa,pb;
        
        for(ll i=1; i<=a; ++i) {
            pa.push_back(i+b);
            pb.push_back(i);
        }

        for(ll i=1; i<=b; ++i) {
            pa.push_back(i);
            pb.push_back(i+a);
        }

        for(ll i=(a+b+1); i<=n; ++i) {
            pa.push_back(i);
            pb.push_back(i);
        }

        yes;
        for(auto& x : pa) cout << x << " ";
        cout << "\n";
        for(auto& x : pb) cout << x << " ";
        cout << "\n";
    }
    return 0;
}