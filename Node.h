//
// Created by euael on 11/27/2021.
//

#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H


class Node {
private:
    Node *next;
    int value;
    Node *previous;
public:
    //constructor with 3 parameters
    Node(int value, Node *next, Node *previous){
        this->value = value;
        this->next = next;
        this->previous = previous;
//            std::cout << "node created." << std::endl;
    }

    ~Node(){
        delete this;
        std::cout << "Node Destroyed" << std::endl;
    }

    //value setter and getter
    int getValue() const{
        return value;
    }
    void setValue(int val){
        this->value = val;
    }

    //Next setter and getter
    Node * getNext(){
        return next;
    }
    void setNext(Node * nex){
        this->next = nex;
    }

    // previous setter and getter
    Node *getPrevious() {
        return previous;
    }
    void setPrevious(Node *prev){
        this->previous = prev;
    }

};


#endif //LINKEDLIST_NODE_H
