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

node* insert(node* root, int val){
    node* newnode = new node(val);
    if(root == NULL){
        root = newnode;
        return newnode;
    }
    if(root -> val < val){
        root -> right = insert(root -> right, val);
    }
    else{
        root -> left = insert(root -> left, val);
    }
    return root;
}

int CountLeafNodes(node* root){
    if(root == NULL) return 0;
    if(!root -> left && !root -> right) return 1;
    return 0 + CountLeafNodes(root -> left) + CountLeafNodes(root -> right);
}

int CountNodesWithOneChild(node* root){
    if(root == NULL) return 0;

    int count = 0;
    if((root -> left && !root -> right) || (root -> right && !root -> left)) count = 1;
    return count + CountNodesWithOneChild(root -> left) + CountNodesWithOneChild(root -> right);
}



int main(){
    node* root = NULL;
    root = insert(root, 5);
    root = insert(root, 2);
    root = insert(root, 9);
    root = insert(root , 12);
    root = insert(root, 3);
    root = insert(root,10);
    root = insert(root,15);
    root = insert(root,7);
    root = insert(root,20);
    int count = CountLeafNodes(root);
    cout << count << endl;
    int OneChild = CountNodesWithOneChild(root);
    cout << OneChild << endl;
}