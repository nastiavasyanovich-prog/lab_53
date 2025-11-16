#include <iostream>
#include <format>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

// Function to calculate the value of the expression
double f(double x){
    return cos(17.0 / 56.0) + ((6.0 * M_E) / (61.0 * M_PI)) * (6.0 / ((x - 4.0) * (x + 9.0))) - 15.0 * atan(x - 14.0) + 1.0 / sqrt(x + 10.0);
}

// Function to check the domain
bool x_is_correct(double x){
    return (x != 4.0 && x!= -9.0 && x > -10.0);
}

int main(){
    cout << "The author of this program is Anastasiia Vasianovych. Variant 53.\n"; 
    cout << "This program calculates the value of an expression.\n"; 

    double x;
    cout << "Enter the value of x. It must not be equal to 4 and -9, also be grater than -10 : \n"; 
    cin >> x;

// Checking if the user entered the correct value
    if (cin.fail()){
        cout << "wrong input\n"; 
        return 0;
    }

    cout << "***** do calculations ... ";

    if (x_is_correct(x)){ 
        f(x);
    } 
    cout << "done\n";
    cout << format("for x = {:.7f}\n", x);

    // Displaying the result or undefined if x isn't valid
    if (x_is_correct(x)){
        cout << format("result = {:.8f}\n", f(x));}
    else {
        cout << "result = undefined\n";
    }
}