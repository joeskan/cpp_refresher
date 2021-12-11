//
// Created by Joseph on 12/11/2021.
//

#ifndef CPP_PROBLEMS_LINKEDLIST_H
#define CPP_PROBLEMS_LINKEDLIST_H

#define NULL 0

class Node {
    Node *prev;
    Node *next;
    int key;
public:
    Node(int num = NULL);
    void setNext(Node* n);
    Node* getNext();
    void setPrev(Node* n);
    Node* getPrev();
    int getKey();
    void setKey(int num);
};


class LinkedList {
    Node *head;

public:
    LinkedList(int num = NULL);
    void insert(int value);
    Node* search(int num);
    void listDelete();

};


#endif //CPP_PROBLEMS_LINKEDLIST_H
