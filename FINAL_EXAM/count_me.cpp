#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> count;

        string mx_word;
        int mx_count = 0;
        while (ss >> word)
        {
            count[word]++;

            if (count[word] > mx_count || (count[word] == mx_count && mx_word.empty()))
            {
                mx_word = word;
                mx_count = count[word];
            }
        }

        cout << mx_word << " " << mx_count << endl;
    }
    return 0;
}
