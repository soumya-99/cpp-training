#include <iostream>

using std::cout;
using std::endl;
using std::ostream;

class ListNode {
   public:
    int val_;
    ListNode* next = nullptr;

    ListNode(int val) {
        val_ = val;
    }
};

// Implementation for Singly Linked List
class LinkedList {
   public:
    ListNode* head;
    ListNode* tail;

    LinkedList() {
        // Init the list with a 'dummy' node which makes
        // removing a node from the beginning of list easier.
        head = new ListNode(-1);
        tail = head;
    }

    ~LinkedList() {
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* temp = curr;
            curr = curr->next;
            delete temp;
            temp = nullptr;
        }
    }

    void insertEnd(int val) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }

    void remove(int index) {
        int i = 0;
        ListNode* curr = head;
        while (i < index && curr != nullptr) {
            i++;
            curr = curr->next;
        }

        // Remove the node ahead of curr
        if (curr != nullptr && curr->next != nullptr) {
            curr->next = curr->next->next;
        }
    }

    // void print() {
    //     ListNode* curr = head->next;
    //     while (curr) {
    //         cout << curr->val_ << " -> ";
    //         curr = curr->next;
    //     }
    //     cout << endl;
    // }
};

ostream& operator<<(ostream& os, const LinkedList& list) {
    ListNode* curr = list.head->next;
    while (curr != nullptr) {
        os << curr->val_ << " -> ";
        curr = curr->next;
    }
    os << endl;
    return os;
};

int main() {
    LinkedList list;
    list.insertEnd(1);
    list.insertEnd(2);
    list.insertEnd(3);
    list.insertEnd(4);
    list.insertEnd(5);
    // list.print();
    cout << list;

    list.remove(2);
    // list.print();
    cout << list;

    list.remove(0);
    // list.print();
    cout << list;

    list.remove(2);
    // list.print();
    cout << list;

    list.remove(0);
    // list.print();
    // list.print();
    cout << list;
    cout << list;

    return 0;
}