#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v ={1,2,3,4};
    v.insert(v.begin()+2,100); //v.insert(pos,value) 
    for(int x:v)
    {
      cout<<x<<" ";
    }   
cout<<endl;

   //   vector<int> v3 ={100,200,300,400};
   //   vector<int> v4 = {500,600,700};
   //   //v3.insert(v3.begin()+2,v4.begin(),v4.end());


   // v3.erase(v3.begin()+2);
   //   for(int y:v3)
   //   {
   //    cout<<y<<" ";
   //   }    


    //  vector<int>v={1,2,3,4,5,6};
    //  v.erase(v.begin()+1,v.begin()+5);
    //  for(int x:v)
    //  {
    //   cout<<x<<" ";  //ouputs 1,6
    //  }
}
