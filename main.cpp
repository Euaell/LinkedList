#include <iostream>
#include <sstream>
#include "Stack.h"

using namespace std;



int main() {
//    takes the number of inputs to be expected
    int noOfInput;
    string temp;
    cout << "Enter the number of Inputs: ";
    getline(cin, temp);
    noOfInput = stoi(temp);

//    takes the expressions
    ArrStack str(noOfInput);
    string input;
    cout << "Enter expression to be evaluated: ";
    getline(cin, input);

//    separate the input string if it encounters a space
    istringstream x(input);

    for (string s; x >> s;){
        if (s == "*" || s == "+" || s == "/" || s == "-"){
            double temp1 = str.pop();
            double temp2 = str.pop();
            double res;
            if (s == "*"){
                res = temp1 * temp2;
            } else if (s == "+"){
                res = temp1 + temp2;
            } else if (s == "-"){
                res = temp2 - temp1;
            } else if (s == "/"){
                res = temp2/temp1;
            }
            str.push(res);
        } else {
            double stor;
            stor = stod(s);
            str.push(stor);
        }

    }

    cout << str.pop() << endl;

    cout << "Hello, Euael!" << endl;
    return 0;
}
