#include <bits/stdc++.h>
using namespace std;
int main() {
 int N;
    cin >> N; // Read the input

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= abs(N / 2 - i); j++) {
            cout << " ";
        }
       
    }                 
}