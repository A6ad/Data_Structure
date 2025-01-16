// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<long long int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//        int val;
//        cin>>val;
//        int flag=0;
//        int l=0;
//        int r=n-1;

//        while(r>l){
//             int mid=(l+r)/2;
//             if(v[mid]==flag){
//                 flag = 1;
//                 break;
//             }
//             else if(v[mid]>r){
//                    r = mid-1; 
//             }
//             else{
//                 l = mid + 1;
//             }
//        }
//        if(flag ==1 ){
//         cout<<"YES"<<endl;
//        }
//         else{
//             cout<<"NO"<<endl;
//         }
                  
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 1; i < n; i++) {
        if(v[i] == v[i-1]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
