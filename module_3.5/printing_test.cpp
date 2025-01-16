#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input

    // Generate the pattern row by row
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j && i <= N / 2) {
                cout << "\\"; // Upper part: print '\'
            } else if (i + j == N + 1 && i <= N / 2) {
                cout << "/"; // Upper part: print '/'
            } else if (i == j && i > N / 2) {
                cout << "/"; // Lower part: print '/'
            } else if (i + j == N + 1 && i > N / 2) {
                cout << "\\"; // Lower part: print '\'
            } else if (i == N / 2 + 1 && j == N / 2 + 1) {
                cout << "X"; // Middle part: print 'X'
            } else {
                cout << " "; // Print spaces everywhere else
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
