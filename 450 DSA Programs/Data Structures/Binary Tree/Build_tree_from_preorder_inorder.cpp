#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
        node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

int search(int inorder[], int s, int e, int curr){
    for(int i=s; i<=e; i++){
        if(curr == inorder[i]){
            return i;
        }
    }
    return -1; 
}

node* build_tree(int preorder[], int inorder[], int s, int e){
    static int i=0;

    if(s>e){
        return NULL;
    }

    int curr = preorder[0];    i++;
    
    node* new_node = new node(curr);
    if(s == e){
        return new_node;
    }
    int p = search(preorder, inorder, s, e);
    new_node->left = build_tree(preorder, inorder, s, p-1);
    new_node->right = build_tree(preorder, inorder, p+1, e);
    return new_node;
}

void inorder_print(node* root){
    if(root==NULL){
        return;
    }
    inorder_print(root->left);
    cout<<root->data<<" ";
    inorder_print(root->right);
}

int main(){
    int preorder[]={1, 2, 4, 5, 3, 6, 7};
    int inorder[]={4, 2, 5, 1, 6, 3, 7};

    node* root = build_tree(preorder, inorder, 0, 6);
    inorder_print(root); 
return 0;
}