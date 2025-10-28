#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int maxlen = 0;
    int len = 0;
    for(int i=1; str[i]; i++) {
        if(str[i-1] == str[i]) {
            len++;
            maxlen = max(maxlen,len);
        }else {
            len = 0;
        }
    }
    cout << maxlen + 1 << endl;
    return 0;
}