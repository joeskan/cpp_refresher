//
// Created by Joseph on 12/10/2021.
//

#ifndef CPP_PROBLEMS_STACK_H
#define CPP_PROBLEMS_STACK_H
// assume int stack

#define SIZE 5

class Stack{
    int top;
    int *arr;
    int size;

public:
    Stack(int size = SIZE);
    ~Stack();

    void insert(int num);
    int pop();
    bool isFull();
    bool isEmpty();
};

#endif //CPP_PROBLEMS_STACK_H
