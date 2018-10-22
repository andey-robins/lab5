//
//  Code by Andey Tuttle
//  Last Update October 21, 2018
//  Liscenced under MIT Liscence
//  This file provides a generic facade implementation of a stack using vectors
//

#ifndef _MY_STACK_H_
#define _MY_STACK_H_

#include <vector>

using namespace std;


class MyStack {
public:
    vector<char> v;

    MyStack();
    ~MyStack();

    bool isEmpty() const;
    void push(char c);
    char pull();
};

#endif
