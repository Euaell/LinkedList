//
// Created by euael on 1/2/2022.
//
#include <iostream>
#ifndef LINKEDLIST_FLOATLIST_H
#define LINKEDLIST_FLOATLIST_H
using namespace std;

class FloatList{
private:
    struct ListNode{
        double value ;
        struct ListNode *next ;
    };
    ListNode *head ;
public:
    FloatList(){
        head = nullptr;
    }
    ~FloatList(){
        delete head;
    }

    void appendNode(float num){
        ListNode *nodePtr , *node ;
        node = new ListNode ;
        node -> value = num;
        node -> next = nullptr;
        if (head == nullptr){
            head = node;
        }else{
            nodePtr = head ;
            while(nodePtr->next){
                nodePtr = nodePtr->next;
            }
            nodePtr->next = node;
        }
    }

    void displayList(){
        ListNode *nodePtr ;
        nodePtr = head;
        while(nodePtr){
            cout<<nodePtr->value<<endl;
            nodePtr = nodePtr->next;
        }
    }

    void insertNode(float num){
        ListNode *nodePtr , *node , *previousNode;
        node = new ListNode ;
        node -> value = num ;
        //node -> next = NULL ;
        if(head == nullptr){
            head = node ;
            node->next = nullptr;
        }else{
            nodePtr = head;
            while(nodePtr!= nullptr && nodePtr->value < num){
                previousNode = nodePtr;
                nodePtr = nodePtr->next;
            }
            if(previousNode == nullptr){
                head = node ;
                node->next = nodePtr;
            }else{
                previousNode->next = node ;
                node->next = nodePtr;
            }
        }
    }

    void deleteNode(float num){
        ListNode *nodePtr , *node , *previousNode;
        if(head == nullptr){
            cout<<"Delete operation cant be done"<<endl;
        }
        if(head->value == num){
            nodePtr = head->next;
            delete head ;
            head = nodePtr;
        }
        else{
            nodePtr = head ;
            while(nodePtr->next != nullptr && nodePtr->value != num){
                previousNode = nodePtr;
                nodePtr = nodePtr->next;
            }
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }

    void reverseList(){
        ListNode *nodePtr, *prevPtr, *prevprevPtr;
        if (!head){
            cout << "no entries" << endl;
            return;
        }
        nodePtr = head;
        prevPtr = nullptr;
        prevprevPtr = nullptr;
        while (nodePtr){
            prevPtr = nodePtr;
            nodePtr = nodePtr->next;
            prevPtr->next = prevprevPtr;
            if (nodePtr == nullptr){
                head = prevPtr;
            }
            prevprevPtr = prevPtr;
        }
    }

};
#endif //LINKEDLIST_FLOATLIST_H
