#include <bits/stdc++.h>
using namespace std;
int main() 
{
    //max priority queue
//     priority_queue<int> pq;
//     pq.push(10);
//     pq.push(5);
//     pq.push(30);
//    cout<< pq.top()<<endl;
//    pq.pop();
//    cout<<pq.top();
  

  //min priority queue
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(10);
    pq2.push(30);
    cout<<pq2.top();
}