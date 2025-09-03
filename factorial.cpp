#include <bits/stdc++.h>
using namespace std;
long long factorial(int x)
{
    if(x==0)
    {
        return 1;
    }
    
    return x * factorial(x-1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<factorial(n)<<endl;
	}

}
