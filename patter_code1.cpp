

#include <iostream>
using namespace std;

int main() {
    int n = 7; // number of rows
    char letters[] = {'g', 'f', 'e', 'd', 'c', 'b', 'a', 'b', 'c', 'd', 'e', 'f', 'g'}; // array of letters
    int width = n*2 - 1; // width of the widest row
    int mid = width/2; // middle column index
int g;
cin>>g;

if(g<0){goto c;}

    // loop through each row of the pattern
    for (int row = 0; row < n; row++) {
        // loop through each column of the pattern
        for (int col = 0; col < width; col++) {
            // check if the current column is within the limits of the current row
            if (col >= row && col <= width - row - 1) {
                // print the letter at the current column relative to the middle column
                cout << letters[mid - abs(mid - col)];
            } else {
                // print a space if the current column is outside the limits of the current row
                cout << " ";
            }
        }
