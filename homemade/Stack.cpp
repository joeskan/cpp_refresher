//
// Created by Joseph on 12/10/2021.
// inspired by https://www.techiedelight.com/stack-implementation-in-cpp/
#include "Stack.h"
#include <iostream>

#define SIZE 5

Stack::Stack(int size) {
    arr = new int[size];
    this->size = size;
    top = -1;
}

Stack::~Stack(){
    delete[] arr;
}

int Stack::pop(){

    if (isEmpty()) {
        std::cout << "Can't pop anymore!";
        exit(EXIT_FAILURE);
    }
    else{
        return arr[top--];
    }
}

void Stack::insert(int num) {
    if (isFull()) {
        std:: cout << "Can't push anymore!";
        exit(EXIT_FAILURE);
    }
    else{
        arr[++top] = num;
    }
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == size - 1;
}
