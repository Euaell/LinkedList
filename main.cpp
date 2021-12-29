#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    ArrQueue x(6);
    x.enqueue(49);
    x.enqueue(28);
    x.enqueue(4);
    x.enqueue(28);
    x.enqueue(4);
    x.enqueue(28);
    cout << "size is now " << x.count() << endl;
    cout << "dequeueing " << x.dequeue() << endl;
//    cout << "dequeueing " << x.dequeue() << endl;
    cout << "size is now " << x.count() << endl;
    cout << "Hello, Euael!" << endl;
    return 0;
}
