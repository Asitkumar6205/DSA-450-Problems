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

int length(node* &head){
    node* temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

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

node* reversek(node* &head, int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int c=0;
    while(currptr!=NULL && c<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        c++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
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
    vector<int>v;
    int i=0, k;
    while(cin>>v[i]){
        insert(head,v[i]);
        i++;
    }
    cin>>k;
    node* newhead=reversek(head,k);
    display(newhead); 
return 0;
}