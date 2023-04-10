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

    double adjustedCost[100] ;
    adjustedCost[0]=current_cost;
    double priceDiff[years+1];
    priceDiff[0] = 0;

    for (int i = 1; i <= years; i++) {
        adjustedCost[i] = adjustedCost[i-1] *(1+ fraction);
        priceDiff[i] = adjustedCost[i] - adjustedCost[i-1];
    }

    cout << fixed << setprecision(2);
    cout << "\nEstimated cost of the item after " << years << " years: $" << adjustedCost[years] << endl;

    cout << "\nDo you want to see the cost difference between every year? (1 for Yes, 0 for No): ";
    cin >> choice;
     if (choice==1) {
        cout << "\nYear\tAdjusted Cost\tPrice Difference\n";
        for (int i = 1; i <= years; i++) {
 cout << i << "\t$" << adjustedCost[i-1] *(1 +  fraction) << "\t\t$" << priceDiff[i] << endl;
        }
    } else if(choice==0) {
        cout << "\nEnter the year you want to see the adjusted cost for: ";
        cin >> years;
        cout << "Adjusted cost in year " << years << ": $" <<  adjustedCost[years] << endl;
    }
    else{
      cout<<"Invalid input";
  }
    return 0;
}

