//
// Created by Joseph on 12/11/2021.
//

#ifndef CPP_PROBLEMS_QUEUE_H
#define CPP_PROBLEMS_QUEUE_H

#define SIZE 5

class Queue {
    int head;
    int size;
    int* arr;

public:
    Queue(int sz = SIZE);
    void enqueue(int num);
    int dequeue();
    bool isEmpty();
    bool isFull();

};


#endif //CPP_PROBLEMS_QUEUE_H
