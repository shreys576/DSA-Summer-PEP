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
    if(root == NULL){
        root = new node(value);
        return root;
    }
    if(value > root -> val){
        root -> right = insert(root -> right, value);
    }
    else{
        root -> left = insert(root -> left, value);
    }
    return root; 
}

void InOrder(node* root){
    if(root == NULL) return;
    InOrder(root -> left);
    cout << root -> val << " ";
    InOrder(root -> right);
}

void PreOrder(node* root){
    if(root == NULL) return;
    cout << root -> val << " ";
    PreOrder(root -> left);
    PreOrder(root -> right);
}

bool Search(node* root, int key){
    if(root == NULL) return false;
    if(root -> val == key) return true;
    if(root -> val > key) return Search(root -> left, key);
    else return Search(root -> right, key);
}

node* Delete(node* root, int key){
    if(root == NULL) return NULL;

    if(root -> val < key){
        root -> right = Delete(root -> right, key);
    }

    else if(root -> val > key){
        root -> left = Delete(root -> left, key);
    }

    else{
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        if(root -> right != NULL && root -> left == NULL){
            node* temp = root -> right;
            delete root;
            return temp;
        }

        if(root -> left != NULL && root -> right == NULL){
            node* temp = root -> left;
            delete root;
            return temp;
        }
        else{
            node* temp = root -> right;
            while(temp -> left){
                temp = temp -> left;
            }
            root -> val = temp -> val;
            root -> right = Delete(root -> right, temp -> val);
        }
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
    InOrder(root);
    cout << endl;
    PreOrder(root);
    cout << endl;

    root = Delete(root, 7);
    InOrder(root);
    cout << endl;

    bool check = Search(root, 12);
    cout << check << endl;

}