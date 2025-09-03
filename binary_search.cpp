#include <bits/stdc++.h>
using namespace std;
int main() {
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    int a[6]={1,5,9,11,15,25};
int val=15;
//cin>>val;
int flag = 0;

int l=0;
int r = 6-1;

while(l<=r)
{
    int mid = (l+r)/2;
    if(a[mid] == val)
    {
        flag = 1;
        break;
    }
    else if(a[mid]>val)
    {
            r = mid + 1;
    }
    else if(a[mid]<val)
    {
        l = mid + 1;
    }
}

if(flag)
{cout<<"found";
}
else 
{
    cout<<"not found";
}
                   
}