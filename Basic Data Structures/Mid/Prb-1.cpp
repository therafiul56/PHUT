#include <bits/stdc++.h>
using namespace std;

bool chek() {
    int a, b;
    cin >> a >> b;

    if (a != b) return false;   

    stack <int> A;
    queue <int> Q;

    for (int i = 0; i < a; i++) {
        int g;
        cin >> g;
        A.push(g);
    }

    for (int i = 0; i < b; i++) {
        int g;
        cin >> g;
        Q.push(g);
    }

    while (!A.empty() && !Q.empty()) {
        if (A.top() != Q.front()) {
            return false;
        }
        A.pop();
        Q.pop();
    }

    return true;
}

int main() {
    cout << (chek() ? "YES" : "NO");
    return 0;
}
