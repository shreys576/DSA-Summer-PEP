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

int countNodes(node* root){
    if(root == NULL) return 0;
    return 1 + countNodes(root -> left) + countNodes(root -> right);
}

int sumNodes(node* root){
    if(root == NULL) return 0;
    return root -> val + sumNodes(root -> left) + sumNodes(root -> right);
}

int height(node* root){
    if(root == NULL) return 0;
    return 1 + max(height(root -> left), height(root-> right));
}

bool search(node* root, int target){
    if(root == NULL) return false;
    return (root -> val == target) || search(root -> left, target) || search(root -> right, target);
}

int main(){
    node* root = new  node(5);
    root -> left = new node(7);
    root -> right = new node(0);
    node * rightst = root -> right;
    rightst -> left = new node(12);
    int f = countNodes(root);
    cout << f << endl;
    int s = sumNodes(root);
    cout << s << endl;
    int h = height(root);
    cout << h << endl;
    bool se = search(root, 12);
    cout << se << endl;
    se = search(root, 100);
    cout << se << endl;
}