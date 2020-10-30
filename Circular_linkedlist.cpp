#include<iostream>
using namespace std;
struct Node {
   int input;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata)
 {
   struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
   struct Node *ptr = head;
   newnode->input = newdata;
   newnode->next = head;
   if (head!= NULL) 
   {
      while(ptr->next!= head)
      ptr = ptr->next;
      ptr->next = newnode;
   } 
   else
   newnode->next = newnode;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->input;
      cout<<" ";
      ptr = ptr->next;
   } while(ptr!= head);
}
int main() {
   insert(7);
   insert(8);
   insert(1);
   insert(3);
   insert(5);
   insert(9);
   cout<<"The Circular Linked List is: ";
   display();
   return 0;
}
