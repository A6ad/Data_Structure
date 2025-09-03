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
int count_nodes(node* root) {
    if (root == NULL) {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1;
}
int depth(node* root) {
    if (root == NULL) {
        return 0;
    }
    int left = depth(root->left);
    int right = depth(root->right);
    return max(left,right)+1;
}
int main() {
    node* root = input_tree();
    int nodes = count_nodes(root);
   int max_depth=depth(root);
       int power = pow(2,max_depth) - 1 ;

         if(nodes == power)
         {
            cout<<"YES"<<endl;
         }         
         else {
            cout<<"NO"<<endl;
         }
}