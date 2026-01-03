#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int x){
        data =x;
        next=nullptr;
    }
};
void printList(Node* head) {
    // Node* curr = head;
    while (head!= nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}
int main() {
    Node* head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    printList(head);
    printList(head);
    return 0;
}
