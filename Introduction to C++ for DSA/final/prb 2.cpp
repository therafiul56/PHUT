#include <bits/stdc++.h>
using namespace std;

bool Jessica(string word) {
    return ( word == "Jessica");
}

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string w;
    bool found = false;

    while (ss >> w) {
        if (Jessica(w)) {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO");

    return 0;
}
