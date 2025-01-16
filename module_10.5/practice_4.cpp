#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node* prev;
    
node(int val)
{
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
}    
};
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newnode = new node(val);
    if ( head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void print_forward(node* head)
{
    node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
    }
    tmp = tmp->next;
}
void reverse_doubly(node* &head,node* &tail)
{
    for()
}
int main() {
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;

    }
    
       
                  
}