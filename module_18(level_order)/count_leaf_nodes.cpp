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
void level_order(node* root)
{
    if(root==NULL)
    {
        cout<<"NO tree"<<endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    while(!q.empty())
    {
        //1. ber kore ana
        node* f = q.front();
        q.pop();
        //2. oi node ke niye kaj
           cout<<f->val<<" ";    
        //3. chiildren push kora
        if(f->left != NULL)
           q.push(f->left);

        if(f->right != NULL)   
           q.push(f->right);
    }
}
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
int count_leaf_nodes(node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;

    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);    
    return l+r;
}
int main() {
    node* root = input_tree();
   
    // level_order(root); 
     cout<<count_leaf_nodes(root);            
}
/*
input:   10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1
output:  10 20 30 40 50 60  

*/