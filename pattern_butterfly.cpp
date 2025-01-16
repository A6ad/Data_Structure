#include <bits/stdc++.h>
using namespace std;
int main() {
    
      for(int i=1;i<5;i++)
      {
        for(int j=1;j<=i;j++)
        {
        cout<<"*";
        }
        for(int j=1;j<=2*(5-i);j++){
            cout<<" ";    
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
      } 



     for(int i=5;i>=1;i--)
     {
        for(int j=1;j<=i;j++)
        {
        cout<<"*";
        }
        for(int j=1;j<=2*(5-i);j++){
            cout<<" ";    
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
     }             
}