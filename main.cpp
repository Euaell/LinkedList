#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    ArrQueue x(6);
//    x.enqueue(49);
//    x.enqueue(28);
//    x.enqueue(4);
    x.enqueue(28);
    x.dequeue();
    x.print();
//    x.dequeue();
//    x.print();
//    x.print();
//    x.enqueue(4);
//    x.enqueue(28);
//    cout << "dequeued " << x.dequeue() << endl;
////    auto va = x.dequeue();
//    x.enqueue(59);
//    x.print();
//    cout << "size is now " << x.count() << endl;
//    cout << "dequeueing " << x.dequeue() << endl;
////    cout << "dequeueing " << x.dequeue() << endl;
//    cout << "size is now " << x.count() << endl;
    cout << "Hello, Euael!" << endl;
    return 0;
}
