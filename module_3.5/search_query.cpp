#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>q;
    sort(v.begin(),v.end());
 
    for(int i=0;i<q;i++){
       int val;
       cin>>val;
       int l=0,r=n-1;
       int flag =0;

       while(r>=l)
       {
        int mid=(l+r)/2;
            if(v[mid]==val)
            {
                flag = 1;
                break;
            }
            else if(v[mid]>val)
            {
                r=mid-1;
            }
            else{
                l = mid+1;
            }
            
       }
          if(flag==1)
            {
                cout<<"yes"<<endl;
            }
            else {
                cout<<"no"<<endl;
            }
    }
    
       
                  
}