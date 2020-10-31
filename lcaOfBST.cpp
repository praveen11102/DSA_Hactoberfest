int lcaBinaryTree(BinaryTreeNode <int>* root , int val1, int val2){
    if(root==NULL)
        return -1;
    if(root->data==val1||root->data==val2){
        return root->data;
    }
    
    int leftOutput = lcaBinaryTree(root->left, val1, val2);
    int rightOutput = lcaBinaryTree(root->right, val1, val2);
    
    if(leftOutput!=-1&&rightOutput!=-1){
        return root->data;
    }
    if(leftOutput==-1)
        return rightOutput;
    else if(rightOutput==-1)
        return leftOutput;
    return -1;
}
