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

//    inserts the value to the list in the right order
    void insert(int value){
        int z = this->count();
        at = head;
        Node * prevptr = nullptr;
        if (z == 0){
            head = new Node(value, nullptr, nullptr);
        }
        while(z > 0){
            if (at -> getValue() >= value){
                if (at == head){
                    head = new Node(value, at, nullptr);
                    at->setPrevious(head);
                    break;
                }
                at -> setPrevious(new Node(value, at, prevptr));
                prevptr -> setNext(at -> getPrevious());
                break;
            }
            if (at -> getNext() == nullptr){
                at ->setNext(new Node(value, nullptr, at));
                break;
            }
            prevptr = at;
            at = at ->getNext();
            z--;
        }
        at = nullptr;
    }
};


#endif //LINKEDLIST_LINKEDLIST_H
