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
    node* newnode= new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_singly(node* head)
{
    node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void print_backward(node* head)
{
    if(head == NULL)
    {
        return;
    }
    print_backward(head->next);
    cout<<head->val<<" ";
}
void remove_duplicate_singly(node* head)
{
    for(node* i =head;i!=NULL;i=i->next)
    {
        node* prev = i;
        for(node* j = i->next;j!=NULL;)
        {
            if(i->val == j->val)
            {
                prev->next = j->next;
                delete j;
                j = prev->next;
            }
            else {
                prev = j;
                j = j->next;
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
    if(val==-1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
}       
print_singly(head);
cout<<endl;
remove_duplicate_singly(head);
cout<<endl; 
print_singly(head);
                  
}