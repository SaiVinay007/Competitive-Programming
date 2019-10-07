int countNonLeafNodes(Node* root)
{
    // Code here

    if(!root)
    {
        return 0;
    }
    
    if (root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    
    int val1 = countNonLeafNodes(root->left);
    int val2 = countNonLeafNodes(root->right);
    return 1+val1+val2;
    
}