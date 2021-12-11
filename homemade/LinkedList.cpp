//
// Created by Joseph on 12/11/2021.
//

#include "LinkedList.h"

Node::Node(int num) {

    next = nullptr;
    prev = nullptr;
    key = num;
}

Node *Node::getNext() {
    return next;
}

Node *Node::getPrev() {
    return prev;
}

void Node::setNext(Node *n) {
    next = n;
}

void Node::setPrev(Node *n) {
    prev = n;
}

int Node::getKey() {
    return key;
}

void Node::setKey(int num) {
    key = num;
}

LinkedList::LinkedList(int num) {
    head = new Node(num);
}


void LinkedList::insert(int value) {
    // create a node with the input value
    Node* n = new Node(value);
    // set the next node as the current head
    n->setNext(head);

    // if head exists
    if (head != nullptr){
        // set the previous node as the newly made node
        head->setPrev(n);
    }
    // change the head to the new node
    head=n;
    // clear any previous nodes for the head
    n->setPrev(nullptr);
}

void LinkedList::listDelete() {
    if (head->getNext() != nullptr){
        head = head->getNext();
        head->setPrev(nullptr);
    }
}

Node *LinkedList::search(int num) {
    Node *n = head;
    while (n != nullptr && n->getKey() != num){
        n = n->getNext();
    }
    return n;
}