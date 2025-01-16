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
void sort_link_list(node* head)
{
        for(node* i=head;i->next!= NULL;i = i->next)
           {
        for(node* j=i->next;j!=NULL; j= j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        
}
    }
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
       sort_link_list(head);
       print_linklist(head);
                  
}