#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> addresses;
    string address;

    while (cin >> address && address != "end")
    {
        addresses.push_back(address);
    }

    auto current = addresses.begin();
    int q;
    cin >> q;
    string command;
    while (q--)
    {
        cin >> command;
        if (command == "visit")
        {
            cin >> address;
            auto it = find(addresses.begin(), addresses.end(), address);
            if (it != addresses.end())
            {
                current = it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (current != addresses.end() && next(current) != addresses.end())
            {
                ++current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev"){
            if (current != addresses.begin() && next(current) != addresses.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
      }
    }
}