#include <bits/stdc++.h>
using namespace std;
// class class node
// {
//     public:
//     int val;
//     node* next;
    
// node(int val)
// {
//     this->val = val;
//     this->next = NULL;
// }    
// };

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
    //stattic node
    node a(10),b(20),c(30);

    a.next = &b;
    b.next = &c;

     cout<<a.val<<endl;
     cout<<a.next->val<<endl;

     //dynamic node
       
       node* head = new node (10);
       node* x = new node(20);
       node* y = new node(30);
        
       node* temp = head;  //creating a temporary node to iterate through head to tail           
       while(temp!=NULL)
       {
        cout<<temp->val<<endl;
        temp = temp->next;
       } 
}