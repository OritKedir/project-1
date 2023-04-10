// move to the next line after printing each row
        cout << endl;
    }

    // loop through each row of the inverted triangle
    for (int row = n-2; row >= 0; row--) {
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
        // move to the next line after printing each row
        cout << endl;
    }
c:
    return 0;
}