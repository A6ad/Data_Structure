#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5,6};

    auto it=find(v.begin(),v.end(),2);    

       if(it==v.end()){
        cout<<"no";
       }
       else{
        cout<<"yes";
       }
                  
}