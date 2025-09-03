#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* input_tree() {
    int val;
    cin >> val;
    node* root ;
    if(val == -1)
     root = NULL;
     else root = new node(val);
    queue<node*> q;
    if(root) q.push(root);
    while (!q.empty()) {
        node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        node* myleft, * myright;
        if (l == -1) myleft = NULL;
        else myleft = new node(l);
        if (r == -1) myright = NULL;
        else myright = new node(r);

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_left(node* root) {
    if(root->left)
    print_left(root->left);
    else if(root->right)
    print_left(root->right);

    cout<<root->val<<" ";
} 
void print_right(node* root)
{
    cout<<root->val<<" ";

    if(root->right)
    {
        print_right(root->right);
    }
    else if(root->left)
    print_right(root->left);
}
void outer_tree(node* root)
{
    if(root->left)
    print_left(root->left);
    cout<<root->val<<" ";

    if(root->right)
    print_right(root->right);

}    
int main() {
    node* root = input_tree();
    outer_tree(root);
    return 0;
}