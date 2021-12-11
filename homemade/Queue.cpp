//
// Created by Joseph on 12/11/2021.
//
#include <iostream>
#include "Queue.h"

Queue::Queue(int sz) {
    size=sz;
    arr=new int[sz];
    head = sz;
}

int Queue::dequeue() {

    if (isEmpty()){
        std::cout << "Can't dequeue anymore";
        exit(EXIT_FAILURE);
    }
    return arr[head++];

}

void Queue::enqueue(int num) {
    if (isFull()){
        std::cout << "Can't enqueue anymore";
        exit(EXIT_FAILURE);
    }
    arr[--head] = num;
}

bool Queue::isFull() {
    return head == 0;
}

bool Queue::isEmpty() {
    return head == size;
}

