#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> l(10,5);
    
    //1
    // for(auto it= l.begin(); it!=l.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    
    //2
    // list<int> li2={1,2,3,4,5};
    // for(int x: li2 )
    // {
    //     cout<<x;
    // }


//3
//     int arr[3]={1,2,3};    
//     list<int> li3(arr,arr+3);

// for(int x:li3)
// {
//     cout<<x<<" ";
// }

//4
vector<int> v = {10,20,30,40};
list<int> li4(v.begin(),v.end());

for(int x: li4)
{
    cout<<x<<" ";
}

}