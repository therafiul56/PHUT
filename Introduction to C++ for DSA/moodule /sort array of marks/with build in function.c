#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string nm;
    int rl;
    int mrks;
};

bool cmp(const student &l, const student &r) {
    return l.mrks > r.mrks;
}

int main() {
    int a;
    cin >> a;
    vector<student> arr(a);

    for (int i = 0; i < a; i++)
        cin >> arr[i].nm >> arr[i].rl >> arr[i].mrks;

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < a; i++) {
        arr[i].rl = i + 1;
        cout << arr[i].nm << " " << arr[i].rl << " " << arr[i].mrks << endl;
    }
}
