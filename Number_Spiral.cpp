#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long r,c;
        cin >> r >> c;
        long long ans = 0;
        if(r >= c) {
            if(r%2 == 0) {
                ans = r*r - (c-1);       
            }else {
                ans = (r-1)*(r-1) + c;
            }
        }else {
            if(c%2 == 0) {
                ans = (c-1)*(c-1) + r;
            }else {
                ans = c*c - (r-1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}