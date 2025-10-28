/**
 *    author:  Meet
 *    created: 27.10.2025 22:40:34
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
    
    string s;
    cin >> s;

    ll n = s.size();

    vector<ll> f(26,0);

    for(char& ch : s) ++f[ch - 'A'];

    ll mx = 0, mxInd = 0;
    for(ll i=0; i<26; ++i) {
        if(mx < f[i]) {
            mx = f[i];
            mxInd = i;
        }
    }

    if(mx > (n+1)/2) {
        minus;
    }else {
        for(ll i=0; i<n; ++i) {
            
            for(ll j=0; j<26; ++j) {
                if(!f[j]) continue;

                if(i > 0 && s[i-1] - 'A' == j) continue;

                if(j == mxInd) {
                    s[i] = (char)(mxInd + 'A');
                    --f[mxInd];
                    break;
                }else {
                    if((n - i)/2 >= mx) {
                        s[i] = (char)(j + 'A');
                        --f[j];
                        break;
                    }else {
                        continue;
                    }
                }
            }

            mx = 0, mxInd = 0;
            for(ll j=0; j<26; ++j) {
                if(mx < f[j]) {
                    mx = f[j];
                    mxInd = j;
                }
            }

        }

        cout << s << "\n";
    }
    return 0;
}