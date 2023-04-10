#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double current_cost, rate, fraction;
    int years, choice,i;

    cout << "Enter the current cost of the item: $";
    cin >> current_cost;
    cout << "Enter the number of years from now that the item will be purchased: ";
    cin >> years;
    cout << "Enter the rate of inflation as a percentage: ";
    cin >> rate;
 if (choice==1) {
        cout << "\nYear\tAdjusted Cost\tPrice Difference\n";
        for (int i = 1; i <= years; i++) {
            cout << i << "\t$" << adjustedCost[i-1] *(1 +  fraction) << "\t\t$" << priceDiff[i] << endl;
        }
    } else if(choice=0) {
        cout << "\nEnter the year you want to see the adjusted cost for: ";
        cin >> years;
        cout << "Adjusted cost in year " << year << ": $" <<  adjustedCost[year] << endl;
    }
   
    return 0;
}