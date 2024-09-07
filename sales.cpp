#include <iostream>
using namespace std;

int main(){

    double grossIncome = 95000.00;
    double stateTaxRate = 0.04;
    double countyTaxRate = 0.02;

    cout << "Calculating Taxes..." << endl;
    double total_sales = grossIncome/(1-(stateTaxRate+countyTaxRate)) ;
    double state_tax = total_sales * stateTaxRate;
    double county_tax = total_sales * countyTaxRate;
    double total_tax = state_tax + county_tax;

    cout << "Total Sales: $" << total_sales << endl
         << "State Tax:   $" << state_tax << endl
         << "County Tax:  $" << county_tax << endl
         << "Total Tax:   $" << total_tax << endl;
}