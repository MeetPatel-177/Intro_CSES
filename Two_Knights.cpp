#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int i=1;
    while(i <= n) {
        long long total_sq = i*i;
        long long total_permu = total_sq*(total_sq-1);
        long long compliment = (4*2 + 8*3 + 4*(i-4)*4) + (4*4 + 4*(i-4)*6) + ((i-4)*(i-4)*8);
        cout << (total_permu - compliment)/2 << endl;
        i++;
    }
    return 0;
}