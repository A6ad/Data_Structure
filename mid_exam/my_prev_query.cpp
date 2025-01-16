#include <bits/stdc++.h>
using namespace std;
void printforward(list<int>& li) {
    cout<<"L -> ";
    for (int val : li) {
        cout << val << " ";
    }
    cout << endl;
}
void printbackward(list<int>& li) {
    cout<<"R -> ";
    for (auto it = li.rbegin(); it != li.rend();it++) {
        cout << *it <<" ";
    }
    cout << endl;
}
int main() {
    int q;
    cin>>q;
    list<int>li;
    
for(int i=0;i<q;i++)
{
    int x,v;
    cin>>x>>v;
    if(x==0)
    {
        li.push_front(v);
    }
    else if(x==1)
    {
        li.push_back(v);
    }
    else if(x==2)
    {
        if(v>=0 && v<li.size())
        {
           auto it = li.begin();
           for(int j=0;j<v;j++)
           {
            it++;
           }
           li.erase(it);
        }
    }
    printforward(li);
    printbackward(li);
}
 

 
                  
}