#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
        node(int val){
            data=val;
            next=NULL;
        }
};

void insert(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void removeathead(node* &head){
    node* d=head;
    head=head->next;
    delete d;
}

void remove(node* head, int val){

    if(head==NULL){
        return;
    }

    if(head->next==NULL){
        removeathead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;        
    }
    node* d=temp->next;
    temp->next=temp->next->next;
    delete d;
}

void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;    
}

node* reverse(node* head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

int main(){
    node* head=NULL;
    insert(head,23);
    insert(head,25);
    insert(head,237);
    insert(head,2);
    node* newhead=reverse(head);
    display(newhead);
return 0;
}