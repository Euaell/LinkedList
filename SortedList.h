//
// Created by euael on 11/27/2021.
//
#include <iostream>
#ifndef LINKEDLIST_SORTEDLIST_H
#define LINKEDLIST_SORTEDLIST_H
#include "Node.h"

class SortedList {
private:
    Node *head;
    Node *at;
    Node *tail;
public:
//    empty list constructor
    SortedList(){
        at = nullptr;
        head = nullptr;
        tail = nullptr;
    }
//    constructor with 1 node
    explicit SortedList(int value){
        this->at = new Node(value, nullptr, nullptr);
        head = at;
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

    void insert(int value){
        bool largerItemFound = false;
        at = head;
        while (at != nullptr){
            if (at->getValue() > value){
                at->setPrevious(new Node(value, at, at->getPrevious()));

                if (at == head && at != tail){
                    head = at->getPrevious();
                } else if (at == tail && at != head){
                    tail = at->getPrevious();
                }else if (at == tail && at == head){
                    tail = at->getPrevious();
                    head = at->getPrevious();
                }
                std::cout << "in the if statement in the while loop" << std::endl;

                if (at->getPrevious()->getPrevious()->getNext() != nullptr){
                    std::cout << "in the inner most if statement" << std::endl;
                    at->getPrevious()->getPrevious()->setNext(at->getPrevious());
                }

                largerItemFound = true;
                std::cout << "'lagerItemFound' set to true" << std::endl;

                break;
            }
            at = at->getNext();
            std::cout << "in the while loop" << std::endl;
        }
        if (!largerItemFound){
            tail->setNext(new Node(value, nullptr, nullptr));
            tail = tail->getNext();
            if (head == nullptr){
                head = tail;
            }
        }
        at = nullptr;
    }

};


#endif //LINKEDLIST_SORTEDLIST_H
