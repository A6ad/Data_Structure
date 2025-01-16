#include <bits/stdc++.h>
using namespace std;
class mystack{
    public:
    list<int>li; 
    void push(int val)
    {
      li.push_back(val);  
    }  
    void pop()
    {
        li.pop_back();
    }
    int  top()
    {
        return li.back();
    }
    int size()
    {
        return li.size();
    }
    bool empty()
    {
        return li.empty();
    }
};

int main() {
mystack st;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    st.push(x);
}
   while(!st.empty())      
   {
    cout<<st.top()<<endl;
    st.pop();
   }         
}
/*input :
5
10 20 30 40 50


output:
50
40
30
20 */