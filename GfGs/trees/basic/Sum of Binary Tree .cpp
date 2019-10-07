#include<stdio.h>
using namespace std;

struct Node
{
	int key;
	Node* left, *right;
};

long int sumBT(Node* root)
{
    // Code here

    // empty tree 
    if (!root) 
        return 0; 
        
    int sum= root->key;
    long int sum1= sumBT(root->left); // remember to use the correct datatype.
    long int sum2= sumBT(root->right);

    return sum + sum1 + sum2;
    
}