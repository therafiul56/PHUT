#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cin.ignore();

    while (a--) {
        stack<char> ST;
        string s;
        getline(cin, s);

        for (char c : s) {
            if (!ST.empty() &&
                ((ST.top() == '0' && c == '1') ||
                 (ST.top() == '1' && c == '0'))) {
                ST.pop();
            } else {
                ST.push(c);
            }
        }

        if (ST.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
