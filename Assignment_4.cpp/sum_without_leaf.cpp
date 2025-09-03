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
        
        node* p = q.front();
        q.pop();


        
        int l,r;
        cin>>l>>r;
        node* myleft,* myright;
        if(l==-1) myleft = NULL;
        else myleft = new node(l);
        if(r == -1) myright = NULL;
        else myright = new node(r);

        p->left = myleft;
        p->right = myright;

        
        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}
int sum_without_leaf(node* root)
{
    if(root == NULL)
      return 0;
if(root->left == NULL && root->right == NULL)
return 0;

int sum = root->val;
if(!root->left == NULL)
sum += sum_without_leaf(root->left);

if(!root->right ==NULL)
sum += sum_without_leaf(root->right);

return sum;
}
int main() {
    node* root = input_tree();
   cout<<sum_without_leaf(root);

}
  