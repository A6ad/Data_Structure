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
void insert_at_any(node* &head, node* &tail, int idx, int val) {
    node* newnode = new node(val);

    if (idx == 0) { // Insert at the head
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        return;
    }

    node* tmp = head;
    int index = 0;
    while (tmp != NULL && index < idx - 1) {
        tmp = tmp->next;
        index++;
    }
    if (tmp == NULL || (tmp->next == NULL &&index + 1 != idx)) {
        cout << "Invalid" << endl;
        delete newnode; 
        return;
    }
    newnode->next = tmp->next;
    newnode->prev = tmp;

    if (tmp->next != NULL) {
        tmp->next->prev = newnode;
    } else {
        tail = newnode; 
    }

    tmp->next = newnode;
}

void print_forward(node* head)
{
   cout<<"L -> ";
   node* tmp = head;
   while(tmp != NULL)
   {
       cout<<tmp->val<<" ";
       tmp = tmp->next;
   }
   cout<<endl;
}


void print_backward(node* tail)
{
    cout<<"R -> ";
    node* tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main() {
    int q;
    cin>>q;
    node* head = NULL;
    node* tail = NULL;   

    while(q--)
    {
        int x,v;
        cin>>x>>v;
        insert_at_any(head,tail,x,v);
        if(head != NULL)
        {
            print_forward(head);
            print_backward(tail);
        }
    }              
}