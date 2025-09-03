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
    tail = tail->next;
}
bool duplicate(node *head)
{
    node *tmp = head;
    int freq[101] = {0};
    while (tmp != NULL)
    {
        freq[tmp->val]++;
        if (freq[tmp->val] > 1)
            return true;
        tmp = tmp->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    if(duplicate(head))
    cout<<"yes"<<endl;

    else 
    cout<<"no"<<endl;
}