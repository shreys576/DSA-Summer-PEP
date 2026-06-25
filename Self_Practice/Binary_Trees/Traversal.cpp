#include <iostream>
using namespace std;

struct node{
    int val;
    node* left;
    node* right;

    node(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

void PreOrder(node* root){
    if(root == NULL) return;
    cout << root -> val << " ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}

void PostOrder(node* root){
    if(root == NULL) return;
    PostOrder(root -> left);
    PostOrder(root -> right);
    cout << root -> val << " ";
}

void InOrder(node* root){
    if(root == NULL) return;
    InOrder(root -> left);
    cout << root -> val << " ";
    InOrder(root -> right);
}

int main(){
    node* root = new node(10);
    root -> left = new node(5);
    root -> right = new node(15);
    root -> left -> left = new node(2);
    root -> left -> right = new node(7);
    root -> right -> left = new node(12);
    root -> right -> right = new node(20);
    PreOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;

}