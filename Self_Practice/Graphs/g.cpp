#include <iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtBeginning(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
    head = newnode;
    return;
    }

    newnode -> next = head;
    head = newnode;
}

void Print(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp -> val << "->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


int main(){
    Node* head = NULL;
    insertAtBeginning(head, 4);
    insertAtBeginning(head, 8);
    insertAtBeginning(head, 12);
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 15);
    Print(head);
}