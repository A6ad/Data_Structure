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
void insert_at_any(node* &head,node* &tail,int idx,int val)
{
    node* newnode= new node(val);
    node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    if(tmp->next == NULL)
    {   tail = newnode;
        return;
    }
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
int main() {
    node* head = new node(10);
    node* a = new node (20);
    node* tail = new node (30);

    head->next = a;
    a->next = tail;

    insert_at_any(head,tail,2,100);   
    print_linklist(head);
    cout<<"----------------\n"<<tail->val;              
}