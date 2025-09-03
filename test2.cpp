#include <iostream>
using namespace std;

int main() {
    // Change text color to red
    cout << "\033[31mThis text is red.\033[0m" << endl;

   // Change text color to green
    cout << "\033[32mThis text is green.\033[0m" << endl;

    // Change text color to yellow
    cout << "\033[33mThis text is yellow.\033[0m" << endl;

    // Change text color to blue
    cout << "\033[34mThis text is blue.\033[0m" << endl;

    // Change text color to magenta
    cout << "\033[35mThis text is magenta.\033[0m" << endl;

    // Change text color to cyan
    cout << "\033[36mThis text is cyan.\033[0m" << endl;

    // Reset text color to default
    // cout << "\033[0mThis text is default color." << endl;

    return 0;
}