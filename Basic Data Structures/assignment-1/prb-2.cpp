#include <bits/stdc++.h>

using namespace std;

int main () {
    long long a,sm=0;
    cin >> a;
    long long arr[a],sum[a];
    for(int i = a-1 ; i>=0 ; i--) {
        cin >> arr[i];
        sm += arr[i];
        sum[i] = sm ;
    }
    for (long long n : sum) {
        cout << n <<" ";
    }
    return 0 ;
}
