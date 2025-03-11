//46. Write a C++ method to compute the future investment value at a given interest rate for a specified number of years.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double investment, rate;
    int years;

    cout<<"Enter the initial investment amount: ";
    cin>>investment;

    cout<<"Enter the annual interest rate in percentage: ";
    cin>>rate;

    cout<<"Enter the number of years: ";
    cin>>years;

    double futureVal = investment * pow(1 + rate / 100, years);

    cout<<"Future value after " << years << " years: "<<futureVal<<endl;

    return 0;
}

/*
output :

Enter the initial investment amount: 4500
Enter the annual interest rate in percentage: 5
Enter the number of years: 4
Future value after 4 years: 5469.78

*/