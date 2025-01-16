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
void delete_at_head(node* &head,node* &tail)
{
  node* deletenode = head;
  head = head->next;
  if(head == NULL){
    tail = NULL;      // if block for handling if theres only one node
    return;
  }
  head->prev = NULL;
  delete deletenode;
}
int main() {
    node* head = new node(10);
    node* a = new node(20);
    node* tail = new node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a; 

       delete_at_head(head,tail);
       delete_at_head(head,tail);
        print_forward(head);                  
}