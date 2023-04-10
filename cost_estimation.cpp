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
fraction = rate / 100.0;

    double adjustedCost = current_cost;
    double priceDiff[years+1];
    priceDiff[0] = current_cost;

    for (int i = 1; i <= years; i++) {
        adjustedCost += (adjustedCost * fraction);
        priceDiff[i] = adjustedCost - priceDiff[i-1];
    }

    cout << fixed << setprecision(2);
    cout << "\nEstimated cost of the item after " << years << " years: $" << adjustedCost << endl;

    cout << "\nDo you want to see the cost difference between every year? (1 for Yes, 0 for No): ";
    cin >> choice;
     if (choice==1) {
        cout << "\nYear\tAdjusted Cost\tPrice Difference\n";
        for (int i = 1; i <= years; i++) {
