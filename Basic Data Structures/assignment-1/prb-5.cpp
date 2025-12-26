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
        
        int size(){
            int count=0;
            Node * temp = head;
            while(temp!=nullptr){
                count++;
                temp = temp->next ;
            }
            return count;
        }
        
        void remove_dupli() {
            for (Node* i = head; i != nullptr; i = i->next) {
                Node* prev = i;
                Node* j = i->next;
                while (j) {
                    if (i->val == j->val) {
                        prev->next = j->next;
                        delete j;
                        j = prev->next;
                    } else {
                        prev = j;
                        j = j->next;
                    }
                  
                }
            }
        }
        
        void input (){
            while(true) {
                int a;
                cin >> a ;
                if(a==-1) return;
                push_back(a);
            }
          
        }
        
};

int main () {
    FastIo;
    linkList li;
    li.input();
    li.remove_dupli();
    li.print();
    return 0 ;
}
