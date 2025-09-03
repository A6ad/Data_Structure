#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    vector<int>p(n);
    p[0]=v[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+v[i];
    }
    for(int i= n-1;i>=0;i--)
    {
        cout<<p[i]<<" ";
    }
    

    return 0;
}
