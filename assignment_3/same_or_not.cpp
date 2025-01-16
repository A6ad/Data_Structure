#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    stack<int>st;
    queue<int>q;
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
if(n!= m)
{
    cout<<"NO"<<endl;
    return 0;
}
     int flag = 1;

     while(!st.empty() && !q.empty())
     {
        if(st.top()!= q.front())
        {
            flag = 0;
            break;
        }
        q.pop();
        st.pop();
     }           

     if(flag)
     {
        cout<<"YES"<<endl;
     }  
     else {
        cout<<"NO"<<endl;
     }
}