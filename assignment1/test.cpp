#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> p(n);
    p[0] = v[0];
    
    // Compute prefix sums
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] + v[i];
    }
    
    // Print prefix sums in reverse order
    for(int i = n - 1; i >= 0; i--) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}
