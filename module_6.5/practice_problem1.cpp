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
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = tail->next;
}
int main() {
    node* head = NULL;
    node* tail = NULL;

    int val;
    int count =0;
    while(true){
        cin>>val;
        if(val == -1)
        {
            break;
        }
        count++;
    }
       cout<<count;
                  
}