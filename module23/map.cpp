#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> mp;
    mp["tamim"]  = 2;     //complexity log(n)
    mp["shamim"] = 5;
    cout<<mp["shamim"]<<endl;
    // for(auto it =mp.begin();it!= mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;   //n(logn)
    // }

    if(mp.count("hamim"))
    {
        cout<<"ache";
    }
    else {
        cout<<"nai";
    }
    return 0;
}