/**
 *    author:  Meet
 *    created: 27.10.2025 13:22:57
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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    ll n;
    cin >> n;

    // vector<vector<ll>> grid(n, vector<ll>(n,0));

    // for(ll i=0; i<n; ++i) {
    //     for(ll j=0; j<n; ++j) {
    //         map<ll,ll> f;
    //         for(ll k=0; k<j; ++k) ++f[grid[i][k]];
    //         for(ll k=0; k<i; ++k) ++f[grid[k][j]];

    //         ll mex = 0;
    //         while(f[mex]) ++mex;

    //         grid[i][j] = mex;
    //     }
    // }

    // for(ll i=0; i<n; ++i) {
    //     for(ll j=0; j<n; ++j) cout << grid[i][j] << " ";
    //     cout << "\n";
    // }

    //(i,i) -> 0, (i,0) -> i, (0,j) -> j
    //from this we can assume a thing that is let's claim grid[i][j] = i^j for all i,j

    //let's assume we have some k(<j) on the left side of the row i such that
    //i^k == i^j
    //by taking xor with i on both side we will have k == j
    //and that is clear contradiction so we will not have any k(<j) on the left side of row 
    //similarly for column also and we can prove that mex[i][j] = i^j
    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<n; ++j) cout << (i^j) << " ";
        cout << "\n";
    }
    return 0;
}