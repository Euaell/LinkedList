#include <iostream>
#include "FloatList.h"
#include "Stack.h"

using namespace std;



int main() {

    LLStack str;
    string input;
    cin >> input;

    bool isBalanced = true;

    for (char i : input) {
        if (i == '(' || i == '[' || i == '{'){
            str.push(i);
        } else if (i == ')' || i == ']' || i == '}'){
            if (str.isEmpty()) {
                isBalanced = false;
                break;
            }

            char temp = str.pop();
            if (temp == '(' && i == ')'){
                continue;
            } else if (temp == '[' && i == ']'){
                continue;
            } else if (temp == '{' && i == '}'){
                continue;
            } else {
                isBalanced = false;
                break;
            }
        }
    }

    if (isBalanced && str.isEmpty()){
        cout << "BALANCED" << endl;
    } else {
        cout << "NOT BALANCED" << endl;
    }

    cout << "Hello, Euael!" << endl;
    return 0;
}
