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
void insert_at_head(node* &head,node* &tail,int v)
{
    node* newnode = new node(v);
    newnode->next = head;
    head = newnode;
    if(tail == NULL){
        tail = newnode;
    }

}
void insert_at_tail(node* &head,node* &tail,int v)
{
    node* newnode = new node (v);
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
void delete_at_any_pos(node* &head,node* &tail,int v)
{
    if(v<0 || head==NULL){
        return;
    }
    if(v==0){
        node* deletenode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        delete deletenode;
        return;
    } 
    node* tmp = head;
    for(int i=1;i<v;i++)
    {
        if(tmp->next == NULL){
            return;
        }
       tmp = tmp->next; 
    }
    
    if(tmp->next == NULL){
        return;
    }
    node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    if(tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deletenode;
}
void print_linklist(node* head)
{
      node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main() {
    node* head = NULL;
    node* tail = NULL;
    int q;
    cin>>q;
    while(q--){
int x,v;
cin>>x>>v;
    if(x==0){
        insert_at_head(head,tail,v);
    }
    else if(x==1){
        insert_at_tail(head,tail,v);
    }
    else if(x==2){
        delete_at_any_pos(head,tail,v);
    }
   print_linklist(head);   
   cout<<endl;
    } 
       
}