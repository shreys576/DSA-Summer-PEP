#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void InsertatBeginning(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode -> next = head;
    head = newnode;
}

void InsertatEnd(Node* &head, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newnode;
}

void InsertatNthPosition(Node* &head, int n, int val){
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 1; i < n - 1; i++){
        temp = temp -> next;
        if(temp == NULL) return;
    }
    if(temp -> next == NULL){
        temp -> next = newnode;
        return;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;

}

void Print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

void printEven(Node* head){
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data % 2 == 0){
            cout << temp -> data << " -> ";
        }
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}


int main(){
    Node* head = NULL;
    InsertatBeginning(head, 2);
    InsertatBeginning(head, 5);
    InsertatBeginning(head, 1);
    InsertatBeginning(head, 8);
    InsertatBeginning(head, 10);
    InsertatEnd(head, 12);
    InsertatNthPosition(head, 5, 29);
    printEven(head);
    Print(head);
}