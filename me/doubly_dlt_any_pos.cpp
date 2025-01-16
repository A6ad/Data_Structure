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
void print_forward(node* head){
node* tmp = head;
while(tmp != NULL)
{
    cout<<tmp->val<<" ";
    tmp = tmp->next;
}
}
void delete_at_any_pos(node* head,int idx)
{
    node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete deletenode;
}
int main() {
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* tail = new node(40);

head->next = a;
a->prev = head;

a->next= b;
b->prev = a;

b->next = tail;
tail->prev = b; 

print_forward(head);
cout<<endl; 
delete_at_any_pos(head,2);
print_forward(head);


                  
}