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

level_order(root);

}