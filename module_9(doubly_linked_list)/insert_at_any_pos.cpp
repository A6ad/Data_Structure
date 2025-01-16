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
void insert_at_any_pos(node* head,int idx,int val){
    node* newnode = new node(val);
    node* temp = head;
    for(int i=1;i<idx;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;

    temp->next = newnode;
    newnode->prev = temp;
}
int main() {
    node* head = new node(10);
    node* a = new node(20);
    node* tail = new node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_pos(head,2,100);
    insert_at_any_pos(head,1,500);
    print_forward(head);
}