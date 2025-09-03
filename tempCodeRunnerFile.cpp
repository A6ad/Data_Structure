#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int>li;
   int val;
    while(cin>>val && val!=-1)
    {
        li.push_back(val);
    }
    li.sort();
    int sz= li.size();
for(int i=0;i<sz;i++)
{
 if(next(li.begin(),i)==next(li.begin(),i+1))
 {
        li.erase(next(li.begin(),i));
 }   
}
        for(int x:li)
        {
            cout<<x<<" ";
        }          
        for(int x : li){
            cout<<" x";
        }
}