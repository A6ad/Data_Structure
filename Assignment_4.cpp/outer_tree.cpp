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
node* input_tree()
{
    int val;
    cin>>val;
    node* root = new node(val);
    queue<node*> q;
    q.push(root); 
    while(!q.empty())
    {
        //1. ber kore ana
        node* p = q.front();
        q.pop();


        //2. oi node ke niye kaj
        int l,r;
        cin>>l>>r;
        node* myleft,* myright;
        if(l==-1) myleft = NULL;
        else myleft = new node(l);
        if(r == -1) myright = NULL;
        else myright = new node(r);

        p->left = myleft;
        p->right = myright;

        //3.children push
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}
void print_left(node* root)
{
    if(root == NULL)
    return;
    if(root->left)
    {
        cout<<root->val<<" ";
        print_left(root->left);   
         }
    
  else if(root->right)
  {
    cout<<root->val<<" ";
    print_left(root->right);
  }
}
void print_right(node* root)
{
    if(root == NULL)
    return;
    if(root->right)
    {
        print_right(root->right);
        if(root->right)
        {   
            print_right(root->right);
            cout<<root->val<<" ";
        }
        else if (root->left) {
        print_right(root->left);
        cout << root->val << " ";
        }
    }

         }
void leaves(node*root)
{
    if(root == NULL)
    return;
    leaves(root->left);

    if(root->left == NULL && root->right == NULL)
    {
        cout<<root->val<<" ";
    }
 leaves(root->right);


}

void print_outer_tree(node* root)
{
    if(root==NULL)
     return;
     
    if(root==NULL)
    return;//root->left != NULL || root->right !=NULL))
    
        cout<<root->val<<" ";
    
    print_left(root->left);

    leaves(root->left);
    leaves(root->right);

    print_right(root->right);
}
int main() {
    node* root = input_tree();
    
    print_outer_tree(root);
    
}
//90 40 20 10 30 50 60 