#include <iostream>
#include "FloatList.h"

using namespace std;



int main() {
    FloatList x;
    x.appendNode(0.7);
//    x.appendNode(2.3);
    x.appendNode(3.4);
    x.appendNode(4.9);
    x.insertNode(1.3);
    x.deleteNode(3.4);
    x.reverseList();
    x.displayList();
    cout << "Hello, Euael!" << endl;
    return 0;
}
