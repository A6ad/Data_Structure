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
bool search (node* root,int val)
{
    if(root == NULL)
        return false;

    if(root->val == val)
      return true;

    if(root->val>val)
     return search(root->left,val);  // short form of
                                     // bool l = search(root->left,val);   
                                     // return l;   
   
    else                                
     return search(root->right,val);
}
int main() {
    node* root = input_tree();
    int val;
    cin>>val;

   if(search(root,val))
    cout<<"Found";

   else 
   cout<<"NOt found";    
                  
}