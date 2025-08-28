// traversing in the linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

int main() {
    // Inserting elements into the linked list
    Node* first = new Node();
    first->data = 1;
    first->next = nullptr;
    head = first;

    Node* second = new Node();
    second->data = 2;
    second->next = nullptr;
    first->next = second;

    Node* third = new Node();
    third->data = 3;
    third->next = nullptr;
    second->next = third;

    // Traversing the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}