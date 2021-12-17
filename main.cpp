#include <iostream>
#include "LinkedList.h"
#include "SortedList.h"
using namespace std;

int main() {
    LinkedList a = LinkedList();
//    a.Add(1);
//    a.Add(2);
//    a.Add(4);
//    a.Add(6);
//    a.Add(7);
    a.insert(5);
    a.insert(5);
    a.insert(23);
    a.insert(1);
    a.insert(34);
    a.insert(23);
    a.insert(3);
    a.insert(3);
    a.insert(0);
    a.print();
    return 0;
}
