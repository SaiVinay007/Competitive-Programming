#include<stdio.h>
using namespace std;

struct Node
{
    int data;
    Node* left, *right;
}; 

/* Computes the height of binary tree with given root.  */
int height(Node* node)
{
   // Your code here
   
    if (!node)
    {
       return 0;
    }
   
    int sum1 = height(node->left);
    int sum2 = height(node->right);
   
   
   return 1 + max(sum1, sum2);
   
}