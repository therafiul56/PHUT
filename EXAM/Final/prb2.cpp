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
        Node* ret = front->data;
        QNode* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL;
        delete temp;
        return ret;
    }
};

void collectLeaves(Node* root, vector<int>& leaves) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        leaves.push_back(root->val);
        return;
    }

    collectLeaves(root->left, leaves);
    collectLeaves(root->right, leaves);
}

int main() {
    int x;
    cin >> x;

    if (x == -1)
        return 0;

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

    vector<int> leaves;
    collectLeaves(root, leaves);

    sort(leaves.begin(), leaves.end(), greater<int>());

    for (int v : leaves)
        cout << v << " ";

    return 0;
}
