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
class mystack{
    public:
    node* head =NULL;
    node* tail = NULL;

    int sz = 0;
    void push(int val)
    {
        sz++;
        node* newnode = new node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {
        if(head == NULL)
        return;

        node* deletenode = tail;
        node* tmp = head;
        for(int i=0;i<sz-1;i++)
        {
            tmp = tmp->next;
        } 
        tail = tmp;
        delete deletenode;

sz--;
    }
    int top()
    {
        return head->val;
    }
    bool empty()
    {
        return (head == NULL);
    }
    int size()
    {
        return sz;
    }

};

class myqueue
{
    public:
    node* head = NULL;
    node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        node* newnode = new node(val);
        if(head == NULL )
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void pop()
    {   
        sz--;
        node* deletenode = head;
        head = head->next;
           delete deletenode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
int main() {
    int n,m;
    cin>>n>>m;
    myqueue q;
    mystack st;
     
for(int i=0;i<n;i++)
{
    int val;
    cin>>val;
    st.push(val);
}
       
       for(int i=0;i<m;i++)
       {
        int val;
        cin>>val;
        q.push(val);
       }
       if(st.size()!= q.size())
       {
        cout<<"NO"<<endl;
        return 0;
       }

    mystack tmp_st ;
    while(!st.empty())
    {
        tmp_st.push(st.top());
        st.pop();
    }

        int flag = 1;
       while(!tmp_st.empty() && !q.empty())
       {
        if(tmp_st.top() != q.front())
        {
            flag =0;
            break;
        }
        tmp_st.pop();
        q.pop();
       }

       if(flag &&tmp_st.empty() && q.empty())
       {
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
                  
}