//
// Created by euael on 12/29/2021.
//
#include <iostream>
#ifndef LINKEDLIST_STACK_H
#define LINKEDLIST_STACK_H

#include "LinkedList.h"

class LLStack{
private:
    LinkedList stack;
    int top;
public:
    LLStack(){
        std::cout << "Stack created!" << std::endl;
        stack = LinkedList();
        top = -1;
    }

    bool isEmpty(){
        return stack.count() <= 0;
    }

    int count(){
        return stack.count();
    }

    void print(){
        if (isEmpty()){
            std::cout << "Stack is Empty!" << std::endl;
        } else{
            stack.print();
        }
    }

    void push(int value){
        stack.Add(value);
        top++;
    }

    int Top(){
        int val;
        if(isEmpty()){
            std::cerr << "Stack empty!" << std::endl;
            val = -1;
        }else{
            val = stack.At(top);
        }
        return val;
    }

    int pop(){
        int val = -1;
        if(isEmpty()){
            std::cerr << "Stack empty!" << std::endl;
        }else{
            val = stack.At(top);
            stack.deleteAt(top);
            top--;
        }
        return val;
    }
};

class ArrStack{
private:
    double * arr;
    int size;
    int top;
public:
    explicit ArrStack(int size){
        this->size = size;
        this->arr = new double [this->size];
        this->top = -1;
        std::cout << "Stack Created." << std::endl;
    }
    ~ArrStack(){
        std::cout << "Stack deleted." << std::endl;
        delete [] arr;
    }
    bool isFull(){
        return top >= size - 1;
    }
    bool isEmpty(){
        return count() <= 0;
    }
    int count(){
        return top + 1;
    }

    void push(double value){
        if (isFull()){
            std::cerr << "Stack is Full." << std::endl;
            return;
        }
        *(arr + ++top) = value;
    }
    double pop(){
        if (isEmpty()){
            return -1;
        }
        return *(arr + top--);
    }
    int Top(){
        if (isEmpty()){
            std::cout << "Stack is Empty." << std::endl;
            return -1;
        }
        return *(arr + top);
    }

    void print(){
        if (isEmpty()){
            std::cout << "Stack is Empty" << std::endl;
            return;
        }
        int counter = 0;
        while(counter <= top){
            std::cout << *(arr + counter) << " ";
            counter++;
        }
        std::cout << std::endl;
    }
};

#endif //LINKEDLIST_STACK_H
