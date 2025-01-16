//inorder ( left -> root-> right)


#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* left;
    node* right;
node(int val)
{
    this->val = val;
    this->left = NULL;
    this->right = NULL;
}    
};
void inorder(node* root)
{
    if(root == NULL)
       return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main() {
    node* root = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);
    node* e = new node(60);

root->left = a;
root->right = b;

a->left = c;

b->left= d;
b->right = e;
               inorder(root);   
}

