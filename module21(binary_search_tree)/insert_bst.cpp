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
    node* root = NULL;
    if(val == -1) root = NULL;
    else root = new node(val);
    queue<node*> q;

    if(root) q.push(root);
    while(!q.empty())
    {
        //1.node ber kore ana
        node* p = q.front();
        q.pop();

        //2.oi node niye kaj kora
        int l,r;
        cin>>l>>r;
        node* myleft,*myright;
        if(l == -1) myleft = NULL;
        else myleft = new node(l);

        if(r == -1) myright = NULL;
        else myright = new node(r);

        p->left = myleft;
        p->right = myright;

        //3. child push kora 
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

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
void insert(node* &root , int val)
{
    if(root == NULL)
     { 
       root = new node(val);
       return ;    
     } 
    if(root->val > val)
    {
        //left
        if(root->left == NULL)
        root->left = new node(val);
        else 
        insert(root->left,val);
    }
    else
    {
        //right
        if(root->right == NULL)
        root->right = new node(val);
        else
        insert(root->right,val);
}
}

int main() {
    node* root = input_tree();
    int val;
    cin>>val;

     insert(root,val);
     level_order(root);   

}
