#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> l = {10,20,30,40,50,60,70};
    //l.erase(next(l.begin(),3));      // erase 40

    //2
    // imagine i want to delete 30,40,50   
    // l.erase(next(l.begin(),2),next(l.begin(),5)); // erase 30,40,50 
    //    for(int x:l)
    //    {
    //     cout<<x<<" ";   
    //    }          

    //3
    //replace(l.begin(),l.end(),20,100); // replace 20 with 100

    //4
    auto it = find(l.begin(),l.end(),20); // find 20
    if(it==l.end())
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"element found";
    }


    for(int x:l)
    {
        cout<<x<<" ";   
    }
}