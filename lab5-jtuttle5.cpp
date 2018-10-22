//
//  Code by Andey Tuttle
//  Last Update October 21, 2018
//  Liscenced under MIT Liscence
//  This file shows different implementations of data structures to reverse a string
//

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include "MyStack.h"

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

int main(){

    cout << "'Stack' reversed is " << stringReversal1("Stack") << endl;
    cout << "'Vector' reversed is " << stringReversal2("Vector") << endl;
    cout << "'List' reversed is " << stringReversal3("List") << endl;
    cout << "'MyStack' reversed is " << stringReversal4("MyStack") << endl;

    system("pause");

    return 0;
}

string stringReversal1(string input) {
        stack<char> s;

        for (int i = 0; i < input.length(); i++) {
            s.push(input.at(i));
        }

        string out;

        while (s.empty() != true) {
            out.push_back(s.top());
            s.pop();
        }

        return out;
}

string stringReversal2(string input) {
    vector<char> v;

    for (int i = 0; i < input.length(); i++) {
        v.push_back(input.at(i));
    }

    string out;

    while (!v.empty()) {
        v.shrink_to_fit();
        out.push_back(v.back());
        v.pop_back();
    }

    return out;
}

string stringReversal3(string input) {
    list<char> l;

    for (int i = 0; i < input.length(); i++) {
        l.push_back(input.at(i));
    }

    string out;

    while (!l.empty()) {
        out.push_back(l.back());
        l.pop_back();
    }

    return out;
}

string stringReversal4(string input) {
    MyStack m;

    for (int i = 0; i < input.length(); i++) {
        m.push(input.at(i));
    }

    string out;

    while (!m.isEmpty()) {
        out.push_back(m.pull());
    }

    return out;
}
