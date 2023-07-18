#include <bits/stdc++.h>

using namespace std;

typedef class Node {
    public:
        int data;
        Node* next;
} Node;

int main() {
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;
    return 0;
}
