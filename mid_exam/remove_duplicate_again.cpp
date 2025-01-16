#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> lst;
    int val;
    bool exist[1000]= {false};   
                  
    while(cin>>val && val!= -1)
    {
        if(exist[val]== false)
        {
            lst.push_back(val);
            exist[val] = true;
        }
    }           

    lst.sort();   
    for(int x: lst)
    {
        cout<<x<<" ";
    }
}