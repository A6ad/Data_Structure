#include <bits/stdc++.h>
using namespace std;
class mystack
{
public:
    queue<int> q;
    mystack()
    {
    }
    void push(int x)
    {
        q.push(x);
    }
    int pop()
    {
        queue<int> q2;
        int val;
        while (!q.empty())
        {
            val = q.front();
            q.pop();
            if (q.empty())
            {
               break;
            }
            q2.push(val);
        }
        q = q2;
        return val;
    }
    int top()
    {
        return q.back();
    }
    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    
    //q.pop();


    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}