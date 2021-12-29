//
// Created by euael on 12/29/2021.
//

#ifndef LINKEDLIST_QUEUE_H
#define LINKEDLIST_QUEUE_H

#include "LinkedList.h"

class LLQueue{
private:
    LinkedList queue;
    int last;
public:
    LLQueue(){
        queue = LinkedList();
        last = 0;
    }
    int count(){
        return queue.count();
    }
    bool isEmpty(){
        return count() <= 0;
    }

    void print(){
        if (isEmpty()){
            std::cout << "Queue is Empty!" << std::endl;
            return;
        }
        queue.print();
    }

    void enqueue(int value){
        queue.Add(value);
        last++;
    }

    int dequeue(){
        int ret;
        if(isEmpty()){
            std::cout << "queue is Empty!" << std::endl;
            ret = -1;
        } else{
            ret = queue.At(0);
            queue.deleteAt(0);
        }
        return ret;
    }
};

class ArrQueue{
private:
    int size;
    int * arr;
    int last;
    int first;
public:
    explicit ArrQueue(int size){
        this->size = size;
        this->arr = new int[size];
        this->last = 0;
        this->first = 0;
    }
    bool isFull(){
        return (last + 1)%size == first;
    }
    bool isEmpty(){
        return last%size == first;
    }
    int count(){
        // couldn't implement the count function
    }
    void enqueue(int value){
        if(isFull()){
            std::cout << "Queue is Full." << std::endl;
            return;
        }
        *(arr + last++%size) = value;
    }
    int dequeue(){
        int ret;
        if(isEmpty()){
            std::cout << "Queue is Empty." << std::endl;
            ret = -1;
        } else{
            ret = *(arr + first++);
        }
        return ret;
    }
//    int cou
};

#endif //LINKEDLIST_QUEUE_H
