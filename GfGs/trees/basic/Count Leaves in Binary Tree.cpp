int countLeaves(Node* root)
{
  // Your code here
  
  if(!root)
  {
      return 0;
  }
  
  if(root->left==NULL && root->right==NULL)
  {
      return 1;
  }
  
  int val1 = countLeaves(root->left);
  int val2 = countLeaves(root->right);
  
  return val1 + val2;
  
  
}