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
}
void insert_at_tail(node* &head,node* &tail,int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main() {
node* head1 = NULL;
node* tail1 = NULL;

node* head2 = NULL;
node* tail2 = NULL;

int val;
while(true)
{
    cin>>val;
    if(val == -1)
    {
        break;  
    }
insert_at_tail(head1,tail1,val);   
}
while(true)
{
    cin>>val;
    if(val == -1)
    {
        break;  
    }
insert_at_tail(head2,tail2,val);   
}
int count1 =0;
int count2 =0;
for(node* i =head1;i!=NULL;i=i->next)
{
    count1++;
}
for(node* i =head1;i!=NULL;i=i->next)
{
    count2++;
}
if(count1 != count2)
{
    cout<<"NO"<<endl;
}
else{
    node* tmp1 = head1;
    node* tmp2 = head2;
    bool same = true;

    for(int i=0;i<count1;i++)
    {
        if(tmp1->val != tmp2->val)
        {
            same = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

if(same)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}


}