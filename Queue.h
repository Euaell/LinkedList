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
        this->size = size + 1;
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
        int ret;
        if (last < first)
           ret = (last) + (size - first); // counts to the last and adds the last elements
        else if(last > first)
            ret = last - first;
        else
            ret = 0;
        return ret;
    }

    void print(){
        if (isEmpty()){
            std::cout << std::endl << "Queue is Empty." << std::endl;
            return;
        }
        for (int i = 0; i < count(); ++i) {
            int x = dequeue();
            std::cout << x << " ";
            enqueue(x);
        }
        std::cout << std::endl;
    }

    void enqueue(int value){
        if(isFull()){
            std::cout << "enqueing " <<  value << " Queue is Full." << std::endl;
            return;
        }
        last = last%size;
        *(arr + last) = value;
        last++;
//        std::cout << value << " queued." << std::endl;
    }

    int dequeue(){
        int ret;
        if(isEmpty()){
            std::cout << std::endl << "Queue is Empty." << std::endl;
            ret = -1;
        } else{
            first = first%size;
            ret = *(arr + first);
            first++;
        }
        return ret;
    }

};

#endif //LINKEDLIST_QUEUE_H
