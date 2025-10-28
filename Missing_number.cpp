#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n,0);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int>track(n+1,0);
    for(int i=0; i<n; i++) {
        track[arr[i]] = 1;
    }
    for(int i=1; i<=n; i++) {
        if(!track[i]) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}