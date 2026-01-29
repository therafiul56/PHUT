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
        if (empty()) return NULL;
        QNode* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL;
        return temp->data;
    }
};

int sumExceptLeaf(Node* root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    return root->val
         + sumExceptLeaf(root->left)
         + sumExceptLeaf(root->right);
}

int main() {
    int x;
    cin >> x;

    if (x == -1) {
        cout << 0;
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

    cout << sumExceptLeaf(root);
    return 0;
}
