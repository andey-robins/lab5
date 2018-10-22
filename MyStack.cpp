//
//  Code by Andey Tuttle
//  Last Update October 21, 2018
//  Liscenced under MIT Liscence
//  This file implements MyStack.h
//

#include "MyStack.h"

MyStack::MyStack() {}
MyStack::~MyStack() {}

bool MyStack::isEmpty() const {
    return v.empty();
}

void MyStack::push(char c) {
    v.push_back(c);
}

char MyStack::pull() {
    char o = v.back();
    v.pop_back();
    v.shrink_to_fit();
    return o;
}
