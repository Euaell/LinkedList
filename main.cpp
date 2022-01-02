#include <iostream>
#include "Queue.h"
#include "Stack.h"

using namespace std;

void ArrQueue(int size){
    class ArrQueue x(size);
    int inp;
    cout << "do you want to enqueue or dequeue: (1 or 2) ";
    cin >> inp;
    if (inp == 1){
        // no implementation
    }
}
void ArrStack(int size){
    class ArrStack x(size);
    int inp;
    cout << "do you want to push or pop: (1 or 2) ";
    cin >> inp;
    if (inp == 1){
        // no implementation
    }
}
int Stack(int & choice){
    cout << "You chose Stack. Now chose what type of implementation you want.\n"
            "1) Array Stack     2) Linked List Stack" << endl;
    cout << "(Enter -1 to Exit): ";
    cin >> choice;
    if (choice == -1)
        return choice;
    else if (choice == 1){ // this is done ... it calls the ArrStack func and passes the size to it
        int size;
        cout << "you chose Array Stack" << endl;
        cout << "Enter the size of Stack you want implemented with Array: ";
        cin >> size;
        ArrStack(size);
    }
    else if (choice == 2){
        cout << "you chose Linked List Stack" << endl;
    }
    return 0;
}
int Queue(int & choice){
    cout << "You chose Queue. Now chose what type of implementation you want.\n"
            "1) Array Queue     2) Linked List Queue" << endl;
    cout << "(Enter -1 to Exit): ";
    cin >> choice;
    if (choice == -1)
        return -1;
    else if (choice == 1){ // this is DONE. It calls the ArrQueue func and passes the size of queue to it
        int size;
        cout << "you chose Array Queue" << endl;
        cout << "Enter the size of Queue you want implemented with Array: ";
        cin >> size;
        ArrQueue(size);
    }
    else if (choice == 2){
        cout << "you chose Linked List Queue" << endl;
    }
    return 0;
}

int main() {
    int choice;
    cout << "A simple program to demo the Stack and Queue classes." << endl;
    while (true){
        cout << "Choose what you want to you:\n"
                "1) Stack\t" << "2) Queue" << endl;
        cout << "(Enter -1 to Exit): ";
        cin >> choice;
        if (choice == -1)
            break;
        else if (choice == 1){ // STACK choice
            if (Stack(choice) == -1)
                break;
        } else if(choice == 2){ // QUEUE choice
            if (Queue(choice) == -1)
                break;
        }
        cout << endl;
//        system("cls"); // replace the above statement with this for other dev environments
    }

    cout << "Program EXITED!" << endl;
    cout << "Hello, Euael!" << endl;
    return 0;
}
