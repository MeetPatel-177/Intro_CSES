#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vs vector<string>
#define vb vector<bool>
#define vp vector<pair<ll,ll>>
#define pll pair<ll,ll>

#define f(i,a,b) for(ll i=a; i<b; ++i)
#define fr(i,a,b) for(ll i=a-1; i>=b; --i)
#define fa(v) for(auto& it : v)
#define ff first
#define ss second
#define whole(x) (x).begin(), (x).end()

#define yes cout << "Yes\n"
#define no cout << "No\n"
#define out1(x) cout << (x) << "\n"
#define out2(x,y) cout << (x) << " " << (y) << "\n"
#define out3(x,y,z) cout << (x) << " " << (y) << " " << (z) << "\n"

#define inarr(x) f(i,0,n) cin >> x[i];
#define outarr(x) f(i,0,n) cout << x[i] << " "; cout << "\n";

const ll M = 1e9 + 7;

void setupIO() {
    ios_base::sync_with_stdio(false); //disables the sync between ios and stdio
    cin.tie(0); //untie cin and cout
    cout.tie(0); //optional
}

ll n = 8;
vs grid(n);
ll ans = 0;

void solve(int i, vb& col, vb& d1, vb& d2) {
    if(i == n) {
        ans++;
        return;
    }
    f(j,0,n) {
        if(grid[i][j] == '*' || col[j] || d1[j+i] || d2[j-i+n-1]) continue;
        col[j] = d1[j+i] = d2[j-i+n-1] = 1;
        solve(i+1,col,d1,d2);
        col[j] = d1[j+i] = d2[j-i+n-1] = 0;
    }
}

int main() {
    setupIO();
    f(i,0,n) cin >> grid[i];
    vb col(n), d1(2*n-1), d2(2*n-1);
    solve(0,col,d1,d2);
    out1(ans);
    return 0;
}