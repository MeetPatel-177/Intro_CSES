/**
 *    author:  Meet
 *    created: 27.10.2025 15:02:51
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
    
    ll n,m;
    cin >> n >> m;

    vector<string> grid(n);
    for(ll i=0; i<n; ++i) cin >> grid[i];

    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) {
            char ch = grid[i][j];
            
            vector<bool> have(4,0);
            have[ch - 'A'] = 1;

            if((i-1) >= 0) have[grid[i-1][j] - 'A'] = 1;
            if((j-1) >= 0) have[grid[i][j-1] - 'A'] = 1;

            for(ll k=0; k<4; ++k) {
                if(!have[k]) {
                    grid[i][j] = (char)(k + 'A');
                    break;
                }
            }
        }
    }

    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<m; ++j) cout << grid[i][j];
        cout << "\n";
    }
    return 0;
}