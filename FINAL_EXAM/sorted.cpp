#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int> a;

        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            a.push_back(val);
        }
    a.sort();    
    a.unique();

    for(int x:a)
    {
        cout<<x<<" ";
    }

    }
    return 0;
}