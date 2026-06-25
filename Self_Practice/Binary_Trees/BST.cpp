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

node* insert(node* root, int value){
    if(root == NULL) return new node(value);
    if(value > root -> val){
        root -> right = insert(root -> right, value);
    }
    else{
        root -> left = insert(root -> left, value);
    }
    return root; 
}



int main(){
    node* root = NULL;
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,2);
    root = insert(root,7);
    root = insert(root,12);
    root = insert(root,20);

}