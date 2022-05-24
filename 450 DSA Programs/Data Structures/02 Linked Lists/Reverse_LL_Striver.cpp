#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};

void insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

node* reverse(node* head){
    node* temp = NULL;
    while(head != NULL){
        node* next = head->next;
        head->next = temp;
        temp = head;
        head = next;
    }
    return temp;
}

int main(){
    node* head = NULL;
    insert(head,67);
    insert(head,56);
    insert(head,45);
    insert(head,44);
    insert(head,90);
    node* newll = reverse(head);
    display(newll);
    return 0;
}