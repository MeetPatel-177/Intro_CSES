#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    sort(str.begin(),str.end());
    int count = 0;
    do {
        count++;
    }while(next_permutation(str.begin(),str.end()));
    cout << count << endl;
    do {
        cout << str << endl;
    }while(next_permutation(str.begin(),str.end()));

    return 0;
}