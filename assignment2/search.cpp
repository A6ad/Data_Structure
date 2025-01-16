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
else{
        tail->next = newnode;
        tail = tail->next; // or tail = newnode;
}
}
int main() {
    int t,x;
    cin>>t;
    while(t--){
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
    cin>>x;
    int index = 0;
    bool found = false;
    for(node* i= head;i!= NULL;i=i->next)
    {
        if(i->val == x){
            cout<<index<<endl;
             found = true;
             break;
        }
       index++;
    }

if(!found)
{
    cout<<-1<<endl;
}

    }
       
                  
}