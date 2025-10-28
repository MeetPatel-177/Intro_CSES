#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long total_sum = (long long)(n*(n+1)/2);
    if(total_sum % 2 != 0) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
        int part1 = n/2;
        int part2 = n - part1;
        cout << part1 << endl;
        for(int i=1; i<=part1/2; i++) {
            cout << i << " ";
        }
        for(int i=n-part2/2 + 1; i<=n; i++) {
            cout << i << " ";
        }
        cout << endl << part2 << endl;
        for(int i=part1/2+1; i<=n-part2/2; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}