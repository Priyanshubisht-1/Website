#include <iostream>
#include <cmath>

double calculateFutureValue(double investmentAmount, double annualInterestRate, int years)
{

    double monthlyInterestRate = annualInterestRate / 100 / 12;
    double futureValue = investmentAmount * pow(1 + monthlyInterestRate, years * 12);

    return futureValue;
}

int main()
{
    double investmentAmount;
    double annualInterestRate;
    int years;

    std::cout << "Enter the initial investment amount : ";
    std::cin >> investmentAmount;

    std::cout << "Enter the annual interest rate (in percentage) : ";
    std::cin >> annualInterestRate;

    std::cout << "Enter the number of years : ";
    std::cin >> years;

    double futureValue = calculateFutureValue(investmentAmount, annualInterestRate, years);

    std::cout << "Future value after " << years << " years : " << futureValue << std::endl;

    return 0;
}
