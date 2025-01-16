#include <bits/stdc++.h>
using namespace std;
int pop_back()
{
    queue<int>q2;
    int val;
    while(!q.empty())
    {
        val = q.front;
        q.pop();
        if(q.empty()==true)
        {
            break;
        }
        q2.push()
    }
}
int main() {
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }                  
}