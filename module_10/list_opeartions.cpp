#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> l ={20,30,10,50,40,60};
    //1
    //l.remove(10);

    //2
    //l.sort();

    //sort as descending order
    //l.sort(greater<int>());


    //3
    // list<int> l2= {100,200,300,200,100};
    // l2.sort();
    // l2.unique(); // remove duplicates only when sorted
    
    l.reverse();
    for(int x:l)
    {
        cout<<x<<" ";   
    }
}