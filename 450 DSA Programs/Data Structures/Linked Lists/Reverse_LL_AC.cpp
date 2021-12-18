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
        node* n = new node(val);
        if(head==NULL){
            head=n;
            return;
        }
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

    void display(node* head){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

    node* reverse(node* &head){
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
    insert(head,10);
    insert(head,8);
    insert(head,11);
    insert(head,19);
    insert(head,6);
    insert(head,1);
    node* rll = reverse(head);
    display(rll);
return 0;
} 









