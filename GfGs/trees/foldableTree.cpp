bool fold(struct node* temp1,struct node* temp2 )
{
    if (temp1==NULL && temp2==NULL)
        return true;
    
    if (temp1 && temp2 )
        return (fold(temp1->left , temp2->right) && fold(temp2->left , temp1->right));
         
    return false;
}

bool isFoldable(struct node *root)
{
  // Your code goes here
  return fold(root,root);
}