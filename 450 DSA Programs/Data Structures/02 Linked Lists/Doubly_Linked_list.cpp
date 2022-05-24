#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
    
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;   
    }
    head=n;
}

void insertattail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deletion(node* head, int key){
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* d=temp->next;
    temp->next=temp->next->next;
    delete d;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=NULL;
    insertattail(head,12);
    insertattail(head,14);
    insertattail(head,15);
    insertattail(head,17);
    insertattail(head,19);
    deletion(head,15);
    display(head);
return 0;
}