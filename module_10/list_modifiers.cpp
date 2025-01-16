#include <bits/stdc++.h>
using namespace std;
int main() {
    
       list<int> l = {10,20,30};
       list<int> l2 ;
       l2 = l;     // or i can use this :- l2.assign(l.begin(),l.end()); 
       l.push_back(40);
       //l.push_front(100); // insert at head
       //l.pop_back(); // delete at tail
       //l.pop_front(); // delete at head
       //l.push_front(100); // insert at head


       
       // cout<<*next(l.begin(),2)<<endl; // 30, 2nd element ,this is how we can access the element in list
       l2.insert(next(l2.begin(),2),100); // insert 100 at 2nd position 
       for(int x: l2)
       {
        cout<< x << " "; 
       }
                  
}