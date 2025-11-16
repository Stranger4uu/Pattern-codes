#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        
        // Print leading spaces
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }

        int value = 1;   // First value of each row

        // Print values in each row
        for (int j = 0; j <= i; j++) {
            cout << value << " ";

            // Compute next value using formula: nCr
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
