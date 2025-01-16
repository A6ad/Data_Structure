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
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newnode = new node (val);
if(head==NULL)
{
    head = newnode;
    tail = newnode;
}

        tail->next = newnode;
        tail = tail->next; // or tail = newnode;
}
void print_linklist(node* head)
{
      node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}
void delete_at_any_pos(node* &head,int idx)
{
    node* tmp = head;
    for(int i=1;i<idx;i++)
    {
       tmp = tmp->next; 
    }
    node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
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
       delete_at_any_pos(head,2);
       print_linklist(head);
                  
}