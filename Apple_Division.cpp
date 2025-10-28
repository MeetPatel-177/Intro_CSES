#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define whole(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

void setupIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

//we have only 20 apples so we can take bit masking for this particular question each bit will represent either it is taken or not in current partition
int main() {
    setupIO();
    int n;
    cin >> n;
    vector<ll>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    ll sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    ll min_diff = sum;
    ll curr_diff = 0;
    int tot = (1 << n);
    for(int mask=0; mask<tot; mask++) {
        ll curr_sum = 0;
        for(int i=0; i<n; i++) {
            if((mask & (1 << i)) != 0) {
                curr_sum += arr[i];
            }
        }
        curr_diff = abs(2*curr_sum - sum);
        min_diff = min(min_diff, curr_diff);
    }
    cout << min_diff << "\n";
    return 0;
}