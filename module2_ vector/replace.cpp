#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={1,2,4,5,2,7,2};
    //replace(v.begin(),v.end(),2,100);  // replace all 2's into 100

   replace(v.begin(),v.end()-1,2,100);   //replace all 2 without last 

    for(int x:v)
    {
        cout<<x<<" ";
    }
   

                  
}