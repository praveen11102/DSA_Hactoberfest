#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    //constructor
    node(int d){
        data=d;
        next=NULL;
    }
};
//Insertion at head
void Insertathead(node *&head,int data){
    node *n=new node(data);
    n->next=head;
    head=n;
}
//Print the linked list
void print(node *head){
    node *temp=head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
//Length of the linked list
int length(node*head){
     node *temp=head;
     int len=0;
    while(temp !=NULL){
       temp=temp->next; 
       len++; 
}
    return len;
}
//Insertion at the tail
void Insertattail(node *&head,int data){
    node *n=new node(data);
    if(head==NULL){
    head=new node(data); 
    return;
}
    node*temp=head;
    while(temp->next !=NULL)
     temp=temp->next;
    temp->next=n;
}

//Insertion in the middle
void Insertioninthemiddle(node *& head,int data,int p){
    if(head==NULL || p==0)
    Insertathead(head,data);
    else if(p>length(head))
    Insertattail(head,data);
    else{
        int jump=1;
        node*temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }

}
//Deletion at the head
void deleteathead(node* &head){
    if(head==NULL)
    return;
    node* temp=head;
    head=head->next;
    delete temp;
}
//Deletion at the tail
void deleteattail(node *&head){
    node *prev=NULL;
    node *temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
        prev=temp;
    }
    delete temp;
    prev->next=NULL;
}
//Deletion at the middle
void deleteinthemiddle(node *&head,int p){
    if(p==0)
    deleteathead(head);
   else if(p>length(head))
    deleteattail(head);
   else{
       int jump=1;
       node *temp=head;
       node *agla=NULL;
       while(jump<=p){
           temp=temp->next;
           jump++;
       }
       agla=temp->next;
       temp->next=agla->next;
       delete agla;
   } 
    

}
int main() {
  node *head=NULL;
  Insertathead(head,2);
  Insertathead(head,3);
  Insertathead(head,4);
  Insertathead(head,5);
  Insertioninthemiddle(head,11,12);
  Insertioninthemiddle(head,103,2);
  deleteinthemiddle(head,2);
  print(head);
}