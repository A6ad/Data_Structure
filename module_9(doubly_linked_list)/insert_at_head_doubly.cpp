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
    cout<<endl;
}
void insert_at_head(node* &head,node* &tail,int val)
{
    node* newnode = new node(val); 
  if(head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
int main()
{
   node* head = new node(10); 
   node* a = new node(20); 
   node* tail = new node(30); 

    head->next = a;
    a->prev = head;

    a->next = tail;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    insert_at_head(head,tail,100);
    print_forward(head);
}

