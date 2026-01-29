#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        left = right = NULL;
    }
};

class QNode {
public:
    Node* data;
    QNode* next;

    QNode(Node* n) {
        data = n;
        next = NULL;
    }
};

class Queue {
    QNode* front;
    QNode* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    bool empty() {
        return front == NULL;
    }

    void push(Node* n) {
        QNode* temp = new QNode(n);
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    Node* pop() {
        QNode* temp = front;
        Node* ret = temp->data;
        front = front->next;
        if (front == NULL) rear = NULL;
        delete temp;
        return ret;
    }

    int size() {
        int cnt = 0;
        QNode* temp = front;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
};

int main() {
    int x;
    cin >> x;

    if (x == -1) {
        cout << "Invalid";
        return 0;
    }

    Node* root = new Node(x);
    Queue q;
    q.push(root);

    while (!q.empty()) {
        Node* cur = q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            cur->left = new Node(l);
            q.push(cur->left);
        }
        if (r != -1) {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }

    int level;
    cin >> level;

    Queue levelQ;
    levelQ.push(root);

    int currLevel = 0;
    bool printed = false;

    while (!levelQ.empty()) {
        int sz = levelQ.size();

        if (currLevel == level) {
            while (sz--) {
                cout << levelQ.pop()->val << " ";
            }
            printed = true;
            break;
        }

        while (sz--) {
            Node* n = levelQ.pop();
            if (n->left) levelQ.push(n->left);
            if (n->right) levelQ.push(n->right);
        }

        currLevel++;
    }

    if (!printed)
        cout << "Invalid";

    return 0;
}
