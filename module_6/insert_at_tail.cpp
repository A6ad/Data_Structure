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
void insert_at_tail(node* &head,int val)
{
 node* newnode = new node (val);
 node* tmp = head;
 while(tmp->next!=NULL)
 {
    tmp = tmp->next;
 } 
    tmp->next = newnode;
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
    node* b= new node (30);

     head->next = a;
     a->next = b;
     insert_at_tail(head,40);
   
    print_linklist(head);
    
    
                  
}