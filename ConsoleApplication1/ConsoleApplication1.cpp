#include<iostream>

using namespace std;

double sum(double a, double b)
{
    return a + b;
}
double sub(double a, double b)
{
    return a - b;
}
double div(double a, double b)
{
    return a / b;
}
double pro(double a, double b)
{
    return a * b;
}
double prosum(double a, double b)
{
    return (a + b) * (a + b);
}


int main() {

    // Step 1: Declare Variables

    double number1, number2;



    // Step 2: Ask the user to input two numbers

    cout << "Enter the first number: ";

    cin >> number1;



    cout << "Enter the second number: ";

    cin >> number2;



    // Step 3: Perform arithmetic operations and display the results

    cout << "The sum of the two numbers is: " << sum(number1, number2) << endl;

    cout << "The difference between the two numbers is: " << sub(number1, number2) << endl;

    cout << "The product of the two numbers is: " << pro(number1, number2) << endl;

    cout << "The division result of the two numbers is:" << div(number1, number2) << endl;

    cout << "The Product of the sums of the two numbers is:" << prosum(number1, number2) << endl;

    cout << "The Product of the sums of the two numbers is:" << pro(sum(number1, number2), sum(number1, number2)) << endl;


        return 0;

}
