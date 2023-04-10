#include <iostream>
using namespace std;
int main() {
    int n = 7;
    int width = n * 2 - 1;
    char letters[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
int g;
cin>>g;

if(g<0){goto c;}
 // Print the top half of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < width; j++) {
            if (j <= i) {
                cout << letters[j];
            } else if (j >= width - i - 1) {
                cout << letters[width - j - 1];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
        // Print the bottom half of the pattern
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < width; j++) {
            if (j <= i) {
                cout << letters[j];
            } else if (j >= width - i - 1) {
                cout << letters[width - j - 1];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
c:
    return 0;
}

