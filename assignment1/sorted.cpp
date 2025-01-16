#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int flag =1;
    for(int i=0;i<n;i++)\
    {
        if(v[i]>v[i+1]){
            flag = 0;
        }
    }
    if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

    return 0;
}
