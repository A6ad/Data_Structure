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
void print_forward(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main() {
node* head = NULL;
node* tail = NULL;

int val;
while(true)
{
    cin>>val;
    if(val == -1)
    {
        break;  
    }
insert_at_tail(head,tail,val);   
}
print_forward(head);
}