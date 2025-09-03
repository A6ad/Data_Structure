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
void get_leaf_nodes(node* root,vector<int> & values)
{
    if(root == NULL)
        return ;
    if(root->left == NULL && root->right == NULL)
    {
        values.push_back(root->val);
        return;
    }

    get_leaf_nodes(root->left,values);
    get_leaf_nodes(root->right,values);
}
int main() {
    node* root = input_tree();
    vector<int> values;
    get_leaf_nodes(root,values);

    sort(values.begin(),values.end(),greater<int>());

    for(int x : values)
    {
        cout<<x<< " ";
    }
    cout<<endl;
        
}
