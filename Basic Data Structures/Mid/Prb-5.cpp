#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> pages;
    string s;

    while (true) {
        cin >> s;
        if (s == "end") break;
        pages.push_back(s);
    }

    int t;
    cin >> t;

    auto cur = pages.begin();

    while (t--) {
        string cmd;
        cin >> cmd;

        if (cmd == "visit") {
            string addr;
            cin >> addr;
            auto it = find(pages.begin(), pages.end(), addr);
            if (it != pages.end()) {
                cur = it;
                cout << *cur << "\n";
            } else {
                cout << "Not Available\n";
            }
        } 
        else if (cmd == "next") {
            auto temp = cur;
            temp++;
            if (temp != pages.end()) {
                cur = temp;
                cout << *cur << "\n";
            } else {
                cout << "Not Available\n";
            }
        } 
        else if (cmd == "prev") {
            if (cur != pages.begin()) {
                cur--;
                cout << *cur << "\n";
            } else {
                cout << "Not Available\n";
            }
        }
    }

    return 0;
}
