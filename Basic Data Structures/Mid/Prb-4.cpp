#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void insertAtIndex(int idx, int val) {
        if (idx < 0 || idx > sz) {
            cout << "Invalid\n";
            return;
        }

        Node* newNode = new Node(val);

        if (sz == 0) {
            head = tail = newNode;
        }
        else if (idx == 0) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else if (idx == sz) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else {
            Node* temp = head;
            for (int i = 0; i < idx-1; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }

        sz++;
        printList();
    }

    void printList() {
        cout << "L -> ";
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "\n";

        cout << "R -> ";
        temp = tail;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin >> Q;

    DoublyLinkedList dll;

    while (Q--) {
        int X, V;
        cin >> X >> V;
        dll.insertAtIndex(X, V);
    }

    return 0;
}

