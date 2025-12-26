#include <bits/stdc++.h>
#define FastIo  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll  long long
#define f0(n) for(int i = 0 ; i<n ; i++)
#define f(n) for(int i = 1 ; i<=n ; i++)

using namespace std;

class Node {
    public :
        ll val;
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
        void push_front (ll val) {
            Node * newNode = new Node (val);
            if (head == nullptr) {
                head = tail = newNode ;
            }
            else {
                newNode->next = head;
                head = newNode ;
            }
        }
        void print() {
            Node * temp = head;
            while(temp != nullptr) {
                cout << temp->val << " ";
                temp = temp->next;
            }
        }
        void pop_at(ll idx) {
            if (head==nullptr) return;
        
            if (idx == 0) {
                Node* del = head;
                head = head->next;
                if (!head) tail = nullptr;
                delete del;
                return;
            }
        
            Node* temp = head;
            f0(idx-1) {
                if (temp->next==nullptr) return;
                temp = temp->next;
            }
        
            if (temp->next==nullptr) return;
        
            Node* del = temp->next;
            temp->next = del->next;
            if (del == tail) tail = temp;
            delete del;
        }

        
        void pop_back() {
            if (head == nullptr) return;                
        
            if (head == tail) {               
                delete head;
                head = tail = nullptr;
                return;
            }
        
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
        
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }

        
        
        int size(){
            ll count=0;
            Node * temp = head;
            while(temp!=nullptr){
                count++;
                temp = temp->next ;
            }
            return count;
        }


        
};
int main () {
    FastIo;
    linkList li;
    ll t;
    cin >> t;
    f0(t){
        ll X,V;
        cin >> X >> V ;
        if(X==0) {
            li.push_front(V);
            li.print();
            cout <<"\n";
        }
        else if(X==1){
            li.push_back(V);
            li.print();
            cout <<"\n";
        }
        else if (X==2) {
            ll sz = li.size();
            if (sz > V) {
                li.pop_at(V);
                li.print();
                cout <<"\n";
            }
            else {
                li.print();
                cout << "\n";
            }
        }
    }

    return 0 ;
}
