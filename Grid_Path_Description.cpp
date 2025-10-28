/**
 *    author:  Meet
 *    created: 28.10.2025 13:36:48
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

string s;

bool vis[7][7];
ll ans = 0;

unordered_map<char, pair<ll,ll>> dir = {{'U',{-1,0}}, {'D',{1,0}}, {'L',{0,-1}}, {'R',{0,1}}};

void dfs(ll i, ll j, ll cnt) {
    if(i < 0 || i >= 7 || j < 0 || j >= 7 || vis[i][j]) return;

    if(i == 6 && j == 0) {
        if(cnt == 48) ++ans;
        return;
    }
    if(cnt == 48) return;

    //both upper and lower are visited but left and right are not visited clearly we can't make path
    if((i==0 || vis[i-1][j]) && (i==6 || vis[i+1][j]) && j > 0 && j < 6 && !vis[i][j-1] && !vis[i][j+1]) {
        return;
    }

    //both left and right are visited and upper and lower are not visited clearly we can't make path
    if((j==0 || vis[i][j-1]) && (j==6 || vis[i][j+1]) && i > 0 && i < 6 && !vis[i-1][j] && !vis[i+1][j]) {
        return;
    }

    vis[i][j] = 1;

    if(s[cnt] == '?') {
        dfs(i-1,j,cnt+1);
        dfs(i+1,j,cnt+1);
        dfs(i,j-1,cnt+1);
        dfs(i,j+1,cnt+1);
    }else {
        auto [di,dj] = dir[s[cnt]];
        dfs(i+di,j+dj,cnt+1);
    }

    vis[i][j] = 0;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    cin >> s;

    dfs(0,0,0);

    cout << ans << "\n";
    return 0;
}