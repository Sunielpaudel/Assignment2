#include <iostream>
using namespace std;

int main(){

    double grossIncome = 95000.00;
    double stateTaxRate = 0.04;
    double countyTaxRate = 0.02;
    double cogs = 0; // cogs = cost of good sold
    double totalSales;

    cout << "Calculating Taxes..." << endl;
    totalSales = grossIncome + cogs;
    double state_tax = totalSales * stateTaxRate;
    double county_tax = totalSales * countyTaxRate;
    double total_tax = state_tax + county_tax;

    cout << "Total Sales: $" << totalSales << endl
         << "State Tax:   $" << state_tax << endl
         << "County Tax:  $" << county_tax << endl
         << "Total Tax:   $" << total_tax << endl;
}