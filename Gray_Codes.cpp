#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define whole(x) (x).begin(), (x).end()

const int M = 1e9 + 7;

void setupIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void printBinary(int n, int bits) {
    for(int i=bits-1; i>=0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << "\n";
}
int main() {
    setupIO();
    int n;
    cin >> n;
    int bits = n;
    int tot = 1 << n;
    //remember gray code of any number is (n ^ (n >> 1)) ie (n  ^ (n/2))
    for(int i=0; i<tot; i++) {
        int gray = (i ^ (i >> 1));
        printBinary(gray, bits);
    }
    return 0;
}