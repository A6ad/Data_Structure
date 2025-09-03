#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <pair<int,int>> v(5);
    for(int i=0;i<5;i++)
    {
        cin>>v[i].first >> v[i].second ;
    }

        for(int i=0;i<5;i++)
    {
        cout<<v[i].first<<" " << v[i].second <<endl;
    }
}