#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word ;
    map<string,int> count;
    
    while(ss>>word)
    {
        count[word]++;
    }

        string mx_word ;
        int mx_count = 0;

        for (auto x : count)
        {
            if(x.second > mx_count)
            {
                mx_word = x.first;
                mx_count = x.second;
            }
        }

        cout<<mx_word<<" "<<mx_count<<endl;
    }
    return 0;
}