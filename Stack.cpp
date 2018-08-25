//
// Created by Administrator on 2018/8/13.
//

#include <iostream>
#include "Stack.h"

Stack::Stack() {
    top = 0;
}

bool Stack::isEmpty() {
    return top == 0;
}

bool Stack::isFull() {
    return top == MAX;
}

bool Stack::pop(Item& item) {
    if (top > 0) {
        item = items[--top];
        return true;
    }
    return false;
}

bool Stack::push(const Item& item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    return false;
}

void Stack::printStack() {
    if (top > 0) {
        for (int i = 0; i < top; i++) {
            std::cout << "stack:" << i << " is:" << items[i] << std::endl;
        }
    }
}