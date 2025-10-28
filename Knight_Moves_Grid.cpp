/**
 *    author:  Meet
 *    created: 27.10.2025 13:29:39
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

vector<vector<ll>> dir = {{-2,-1}, {-2,1}, {2,-1}, {2,1}, {-1,-2}, {-1,2}, {1,-2}, {1,2}};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    ll n;
    cin >> n;

    auto isValid = [&] (ll r, ll c) -> bool {
        return (r >= 0 && r < n && c >= 0 && c < n);
    };

    vector<vector<ll>> dp(n, vector<ll>(n,-1));

    dp[0][0] = 0;

    queue<pair<ll,ll>> q;
    q.push({0,0});

    while(!q.empty()) {
        pair<ll,ll> curr = q.front(); q.pop();
        ll x = curr.first, y = curr.second;
        for(auto& d : dir) {
            ll nx = d[0] + x, ny = d[1] + y;
            if(isValid(nx,ny) && dp[nx][ny] == -1) {
                dp[nx][ny] = dp[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }

    for(ll i=0; i<n; ++i) {
        for(ll j=0; j<n; ++j) cout << dp[i][j] << " ";
        cout << "\n";
    }
    return 0;
}