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

void insertAtEnd(Node* &head, int val){
    if(!head){
        insertAtBeginning(head, val);
        return;
    }
    Node* newnode = new Node(val);
    Node* temp = head;
    while(temp -> next){
        temp = temp -> next;
    }
    temp -> next = newnode;
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
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 25);
    insertAtBeginning(head, 35);
    insertAtBeginning(head, 55);
    insertAtBeginning(head, 67);
    insertAtBeginning(head, 76);
    insertAtBeginning(head, 46);
    insertAtEnd(head, 99);
    insertAtEnd(head, 100);
    insertAtBeginning(head, 11);
    Print(head);
}