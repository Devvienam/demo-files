#include <bits/stdc++.h>
using namespace std;
string a[1008];

int main() {
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s.size() > 10) {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
            continue;
        }            
        cout << s << endl;
    }
    return 0;
}
