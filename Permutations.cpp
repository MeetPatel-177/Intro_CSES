#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n<=3 && n!=1) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        int dup = n-1;
        while(dup > 0) {
            cout << dup << " ";
            dup -= 2;
        }
        dup = n;
        while(dup > 0) {
            cout << dup << " ";
            dup -= 2;
        }
    }
    return 0;
}