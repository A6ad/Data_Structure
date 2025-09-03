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
void level_nodes(node* root,int x)
{
    if(root == NULL)
    return ;

    queue<pair<node*,int>> q;
    q.push({root,0});

    while(!q.empty())
    {
        pair<node*,int> p = q.front();
        q.pop();

        if(p.second == x)
        {
            cout << p.first->val << " ";
        }

        if(p.first->left != NULL)
            q.push({p.first->left, p.second + 1});
        if(p.first->right != NULL)
            q.push({p.first->right, p.second + 1});
}
}
int height_t(node* root)
{
    if(root == NULL)
    return 0;
    int l = height_t(root->left);
    int r = height_t(root->right);

return max(l,r)+1;
}
int main() {
    node* root = input_tree();
    int x;
   
    cin >> x;
   
   int height = height_t(root);
   if(x<0 || x>=height)
   {
    cout<<"Invalid"<<endl;
   return 1;
   }
    level_nodes(root, x);
                   

    return 0;
}
