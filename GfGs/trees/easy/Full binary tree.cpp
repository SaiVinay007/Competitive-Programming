bool isFullTree (struct Node* root)
{
//add code here.
    if(root->left==NULL && root->right!=NULL)
    {
        return false;
    }
    else if(root->left!=NULL && root->right==NULL)
    {
        return false;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        return true;    
    }
    return (isFullTree(root->left) && isFullTree(root->right));
}
