#include <iostream>  
using namespace std;  
struct Node {  
    int data;  
    Node *left;  
    Node *right;  
};  

Node* create(int item)  
{  
    Node* node = new Node;  
    node->data = item;  
    node->left = NULL;
    node->right = NULL;  
    return node;  
}  

void inorder(Node *root)  
{  
    if (root == NULL)  
    return;  
    inorder(root->left);
    cout<< root->data << "   ";  
    inorder(root->right); 
} 
  
Node* insertion(Node* root, int item) 
{  
    if (root == NULL)  
        return create(item); 
    if (item < root->data)  
        root->left = insertion(root->left, item);  
    else  
        root->right = insertion(root->right, item);  
    return root;  
}  
int main()  
{  
  Node* root = NULL;  
  root = insertion(root, 45);  
  root = insertion(root, 30);  
  root = insertion(root, 50);  
  root = insertion(root, 25);  
  root = insertion(root, 35);    
  root = insertion(root, 60);  
  root = insertion(root, 4);  
  cout<<"Inorder traversal : "<<endl;
  inorder(root);   
  return 0;  
}  