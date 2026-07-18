#include <iostream>
#include <climits>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};


node* insert(node* root, int key){
    node* newnode = new node(key);
    if(root == NULL){
        root = newnode;
        return root;
    }
    if(root -> val < key){
        root -> right = insert(root -> right, key);
    }
    else{
        root -> left = insert(root -> left, key);
    }
    return root;
}

bool helper(node* root, long long low, long long high){
    if(root == NULL) return true;
    if(root -> val < low || root -> val > high){
        return false;
    }
    return helper(root -> left, low, root -> val) && helper(root -> right, root -> val, high);
}

bool ValidBST(node* root){
    return helper(root, LLONG_MIN, LLONG_MAX);

}

int main(){
    node* root = NULL;
    root = insert(root, 8);
    root = insert(root, 4);
    root = insert(root, 10);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 20);


    
    node* root2 = NULL;
    root2 = insert(root2, 8);
    root2 = insert(root2, 4);
    root2 = insert(root2, 10);
    root2 = insert(root2, 2);
    root2 = insert(root2, 6);
    root2 = insert(root2, 20);
    root2 -> right -> left = new node(1);
    

    bool check = ValidBST(root);
    cout << check << endl;
    cout << ValidBST(root2) << endl;

    
}