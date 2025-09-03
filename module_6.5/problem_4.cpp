#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    tail->next = newnode;
    tail = tail->next; // or tail = newnode;
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_head(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_any_pos(node *&head, node *&tail, int idx, int val)
{
    if (idx == 0)
    {
        insert_at_head(head, val);
        return;
    }

    node *newnode = new node(val);
    node *tmp = head;

    for (int i = 0; i < idx-1; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;

    if (newnode->next == NULL)
    {
        tail = newnode;
        return;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int count = 0;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
        count++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int index , value;
        cin>>index>>value;
        if(index<0 || index >count)
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else 
        {
            if(index == 0)
            {
                insert_at_head(head ,value);
            }
            else if(index == count )
            {
                insert_at_tail(head,tail,value);
            }
            else {
                insert_at_any_pos(head,tail,index,value);
            }
            count++;
            print(head);
        }
    }
}
