/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copinput2right 2021 Adan Rodriguez
 */
#include "header.h"

string inputCalculator (string operation, double input1, double input2) {
   
    if (operation == "+" || operation == "plus") 
        return to_string(input1+input2);

    else if (operation == "-" || operation == "minus") 
        return to_string(input1-input2);

    else if (operation == "/" || operation == "div") 
        return to_string(input1/input2);

    else if (operation == "*" || operation == "mul") 
        return to_string(input1*input2);

    else 
        return "ERROR: Invalid entry detected. Please check your input and try again.\n";

}

int main() {
    
    double input1;
    double input2;
    string operation;

    cout << "Give an operation followed by two operands.\nEXAMPLE: If you want to add 1 and 2, you would enter: + 1 2 [OR] plus 1 2\n";
    cin >> operation >> input1 >> input2;
    cout << inputCalculator(operation, input1, input2);

    return 0;

}