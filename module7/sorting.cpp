// selection sort
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    int arr[5]= {10,20,30,40,50};
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
             for(int i=0;i<5;i++)
             {
                cout<<arr[i]<<" ";
             } 
}