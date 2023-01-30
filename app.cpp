#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    double sales = 95000;
    double state_tax = .04 * sales;
    double county_tax = .02 * sales;

    double gross_margin = sales - state_tax - county_tax;

    cout << "Gross Margin: " << gross_margin << endl;
    cout << "State Tax: " << state_tax << endl;
    cout << "County Tax: " << county_tax << endl;

    return 0;
}
