#include <bits/stdc++.h>
using namespace std;
class Compare {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};
int main()
{
    priority_queue<int, vector<int>, Compare> minheap;
    map<int, int>mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
        minheap.push(val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int command, x;
        cin >> command;
        if (command == 0)
        {
            cin >> x;
            mp[x]++;
            minheap.push(x);
            while(!minheap.empty() && mp[minheap.top()] == 0)
            {
                minheap.pop();
            }
            if (!minheap.empty())
            {
                cout<<minheap.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(command == 1)
        {
            while (!minheap.empty() && mp[minheap.top()] == 0)
            {
                minheap.pop();
            }
            if (!minheap.empty())
            {
                cout<<minheap.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if (command == 2)
        {
            while (!minheap.empty() && mp[minheap.top()] == 0)
            {
                minheap.pop();
            }
            if (!minheap.empty())
            {
                int minVal = minheap.top();
                mp[minVal]--;
                minheap.pop();
                while(!minheap.empty() && mp[minheap.top()] == 0)
                {
                    minheap.pop();
                }
                if (!minheap.empty())
                {
                    cout<<minheap.top()<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}
