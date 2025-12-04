#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t ;
    cin.ignore();
    while(t--){
        string s,r;
        cin >> s >> r;
        while((int)s.find(r)!=-1){
          s.replace(s.find(r),r.size(),"#");  
        }
        cout << s << endl ;
    }

}
