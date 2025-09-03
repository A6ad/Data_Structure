#include <bits/stdc++.h>
using namespace std;
class node {
public:
    int val;
    node* next;

    node(int val) {
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
void mid(node* head)
{
    node* tmp = head;
    int count = 0;

    while(tmp!= NULL)
    {
        count++;
        tmp = tmp->next;
    }

    int middle = count / 2;
   
    node* tmp2 = head;
    for(int i=0;i<middle-1;i++)
    {
        tmp2 = tmp2->next;
    }

   
    if(count % 2 == 0)
    {
        cout<<tmp2->val<<" "<<tmp2->next->val;
    }
    else
    {
        cout<<tmp2->next->val<<endl;
    }
}
int main() {
    node* head = NULL;
    node* tail = NULL;

while(true)
{
    int val;
    cin>>val;
    if(val == -1)
    {
        break;
    }
    insert_at_tail(head,tail,val);
}
mid(head);
    return 0;
}