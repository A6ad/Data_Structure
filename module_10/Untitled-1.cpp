#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        l.push_back(x);
    }



l.insert(next(l.begin(),2),200);

for (int x:l)
    {
        cout<<x<<endl;
    }
    return 0;
}