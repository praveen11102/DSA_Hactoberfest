#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;
    //constructor
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};
//Building a tree
node *buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
   node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
//Preordre Traversal
void printpreorder(node*root){
    if(root==NULL)
    return;
    else{
        cout<<root->data<<" ";
        printpreorder(root->left);
        printpreorder(root->right);
    }

}
//Inorder Traversal
void printinorder(node*root){
    if(root==NULL)
    return;
    else{
        printinorder(root->left);
        cout<<root->data<<" ";
        printinorder(root->right);
    }
 
} 
//Post order traversal
void printpostorder(node*root){
     if(root==NULL)
    return;
    else{
        printpostorder(root->left);
        printpostorder(root->right);
        cout<<root->data<<" ";
    }
}
//height of tree
int height(node*root){
    if(root==NULL)
    return 0;
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}
//diameter of tree
int diameter(node*root){
    if(root==NULL)
    return 0;
    int h1=height(root->left);
    int h2=height(root->right);
    int op1=h1+h2;
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));
}
int main() {
    node*root=buildtree();
    printpreorder(root);
    cout<<endl;
    printinorder(root);
    cout<<endl;
    printpostorder(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    cout<<diameter(root);
    cout<<endl;
}
