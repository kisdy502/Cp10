//
// Created by Administrator on 2018/8/13.
//

#ifndef CP10_STACK_H
#define CP10_STACK_H


typedef unsigned long Item;
//栈

class Stack {
private:
    enum {
        MAX = 10
    };
    Item items[MAX];
    int top;
public:
    Stack();

    bool isEmpty();

    bool isFull();

    bool push(const Item& item);

    bool pop(Item &item);

    void printStack();
};


#endif //CP10_STACK_H
