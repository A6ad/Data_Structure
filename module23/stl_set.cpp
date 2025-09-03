#include <bits/stdc++.h>
using namespace std;
int main() 
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        s.insert(val);  //log(n)
    }
      for(auto it=s.begin();it!= s.end();it++)
        {
            cout<<*it<<" ";
        }

        if(s.count(4))          //log(n)
        {
            cout<<"ache";
        }
        else{
            cout<<"nai";
        }
}
  

// 10
// 2 3 4 2 3 5 1 6 8 2