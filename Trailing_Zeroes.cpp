#include <bits/stdc++.h>
using namespace std;

int trailing_zeroes(int n) {
    int prime = 5;
    int zeroes = 0;
    while(n/prime != 0) {
        zeroes += n/prime;
        prime *= 5;
    }
    return zeroes;
}
int main() {
    int n;
    cin >> n;
    cout << trailing_zeroes(n);
    return 0;
}