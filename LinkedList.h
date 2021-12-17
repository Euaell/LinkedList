//
// Created by euael on 11/27/2021.
//
#include <iostream>
#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H
#include "Node.h"

class LinkedList {
private:
    Node *head;
    Node *at;
    Node *tail;
public:
//    empty list constructor
    LinkedList(){
        at = nullptr;
        head = nullptr;
        tail = nullptr;
    }
//    constructor with 1 node
    explicit LinkedList(int value){
        this->at = new Node(value, nullptr, nullptr);
        head = at;
        tail = at;
        at = nullptr;
    }

//    adds the passed value at the end of the list
    void Add(int x){
        this->at = new Node(x, nullptr, tail);
        if (head == nullptr){
            head = at;
        }else{
            tail->setNext(at);
        }
        tail = at;
        at = nullptr;
    }

//    returns the number of elements in the list
    int count(){
        int c = 0;
        at = head;
        while(at != nullptr){
            c++;
            at = at->getNext();
        }
        at = nullptr;
        return c;
    }

//    prints the values in the List
    void print(){
        at = head;
        while(at != nullptr){
            std::cout << at->getValue() << " ";
            at = at->getNext();
        }
        std::cout << std::endl;
        at = nullptr;
    }

//    returns value at the given index
    int At(int index){
        int z = this->count();
        if (index < z && index >= 0){
            int x = 0;
            at = head;
            while (x != index){
                at = at->getNext();
                x++;
            }
            return at->getValue();
        }else{
            std::cerr << "index out of range!" << std::endl;
        }
        at = nullptr;
        return 0;
    }

//    inserts the value of the second argument to the list at the given index
    void insert(int value){
        int z = this->count();
        Node * nodeptr = head;
        Node * prevptr = nullptr;
        while(z > 0){
            if (nodeptr -> getValue() >= value){
                nodeptr -> setPrevious(new Node(value, nodeptr, prevptr));
                prevptr ->setNext(nodeptr -> getPrevious());
                break;
            }
            if (nodeptr -> getNext() == nullptr){
                nodeptr ->setNext(new Node(value, nullptr, nodeptr));
                break;
            }
            prevptr = nodeptr;
            nodeptr = nodeptr ->getNext();
            z--;
        }
    }
};


#endif //LINKEDLIST_LINKEDLIST_H
