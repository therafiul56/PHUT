#include <bits/stdc++.h>
#define FastIo  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll  long long
using namespace std;

class Node {
    public :
        int val;
        Node * next ;
    Node (ll val) : val(val),next(nullptr) {}
};

class linkList {
    private :
        Node * head ;
        Node * tail ;
        
    public :
    linkList () {
        head = tail = nullptr ;
    }
        void push_back(ll val) {
            Node * newNode = new Node (val);
            if(head == nullptr) {
                head = tail = newNode ;
            }
            else {
                tail -> next = newNode;
                tail = newNode ;
            }
        }
};
int main () {
    FastIo;
    linkList li;
    ll mx=INT_MIN , mn=INT_MAX ;
    while (true){
        ll a;
        cin >> a;
        if(a==-1) break;
        li.push_back(a);
        mx = max(a,mx);
        mn = min(a,mn);
    }
    // cout << mx << " " << mn << " " ;
    cout << (mx-mn);
    return 0 ;
}
