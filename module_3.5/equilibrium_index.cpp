#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    int leftsum =0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    
       for(int i=0;i<n;i++)
       {
         sum-=v[i];
         if(leftsum==sum){
            cout<<i;
            return 0;
         }
         leftsum+=v[i];
       } 
       cout<<"not found";
                  
}