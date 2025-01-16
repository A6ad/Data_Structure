#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    
node(int val)
{
    this->val = val;
    this->next = NULL;
}    
};
int main() {
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);

    head->next = a;
    a->next = b;

    cout<<head->val<<endl;
    cout<<head->next->val<<endl;
       
                  
}