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

    void insert(node* &head, int val){   //Here, by adding "&" before head pointer, we can
        node* n=new node(val);           //change the value the head in functions
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
        // INSERTION 
    void insertion(node* &head, int val){
        node* n=new node(val);
        n->next=head;
        head=n; //Now, head stores the value & address of n(by Reference)
    }
        // SEARCHING
    bool search(node* &head, int val){
        node* temp=head;
        while(temp->next!=NULL){
            if(temp->data==val){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
        //DELETION
    void _delete(node* &head, int val){
        node* temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        node* d=temp->next;
        temp->next=temp->next->next;
        delete d;
    }

        //DELETE AT HEAD
    void delete_at_head(node* &head){
        node* dh=head;
        head=head->next;
        delete dh;
    }  

    void display(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp=temp->next;
        }
    }
    
int main(){
    node *head=NULL;
    insert(head,10);
    insert(head,78);
    insert(head,45);
    insert(head,35);
    insert(head,42);
    insert(head,95);
    delete_at_head(head);
    display(head);
return 0;
} 

























