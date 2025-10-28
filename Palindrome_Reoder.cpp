#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.size();

    vector<int>freq(26,0);
    for(int i=0; i<n; i++) {
        freq[str[i] - 'A'] ++;
    }

    int count = 0;
    for(int i=0; i<26; i++) {
        if(freq[i]%2 != 0) count++;
    }

    if(count > 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        int i=0,j=n-1;
        for(int ind = 0; ind<26; ind++) {
            while(freq[ind] > 1) {
                str[i++] = str[j--] = (ind + 'A');
                freq[ind] -= 2;
            }
        }
        if(i==j) {
            for(int ind=0; ind<26; ind++) {
                if(freq[ind] == 1) {
                    str[i] = (ind + 'A');
                    break;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}