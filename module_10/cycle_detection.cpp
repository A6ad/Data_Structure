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

int main() {
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    node* slow = head;
    node* fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL) // 2nd condition(fase-> next != NULL) is for even number of nodes
    {

        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            flag = true;
            break;  
        }
    }   
    if(flag)
    {
        cout<<"Cycle detected";
    }
    else
    {
        cout<<"No cycle";
    }
         
}