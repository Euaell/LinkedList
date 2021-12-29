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

//        Node(int value){
//            Node(value, nullptr, nullptr);
//        }
//    ~Node(){
//        std::cout << "Node Destroyed" << std::endl;
//    }

    //value setter and getter
    int getValue() const{
        return value;
    }
    void setValue(int val){
        this->value = val;
    }

    //Next setter and getter
    Node * getNext(){
//        std::cout << "getting the next of " << this->getValue() << std::endl;
        return next;
    }
    void setNext(Node * nex){
//        std::cout << "setting the nex of " << this->getValue() << std::endl;
        this->next = nex;
    }

    // previous setter and getter
    Node *getPrevious() {
//        std::cout << "getting the Previous of " << this->getValue() << std::endl;
        return previous;
    }
    void setPrevious(Node *prev){
//        std::cout << "setting the Previous of " << this->getValue() << std::endl;
        this->previous = prev;
    }
};


#endif //LINKEDLIST_NODE_H
