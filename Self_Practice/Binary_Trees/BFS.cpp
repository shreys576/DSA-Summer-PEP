#include <iostream>
#include <queue>
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

void BFS(node* root){
    if(root == NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* current = q.front();
        if(current -> left != NULL) q.push(current -> left);
        if(current -> right != NULL) q.push(current -> right);
        cout << current -> val << " ";
        q.pop();
    }
}


int main(){
    node* root = new node(10);
    root -> left = new node(5);
    root -> right = new node(15);
    root -> left -> left = new node(2);
    root -> left -> right = new node(7);
    root -> right -> left = new node(12);
    root -> right -> right = new node(20);
    BFS(root);

}