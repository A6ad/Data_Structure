#include <bits/stdc++.h>
using namespace std;
int main() {

vector<int> v = {10,20,30,40};
list<int> li4(v.begin(),v.end());
li4.resize(2);
for(int x: li4)
{
    cout<<x<<" ";
}
                  
}