/* 
 * File:   Stack.h
 * Author: helmuth
 *
 * Created on 1 de marzo de 2020, 10:16
 */
#ifndef STACK_H
#define STACK_H
#include "Node.h"

template <class T> 
class Stack {

    public:
        Stack();
        void push(T value);
        T pop();
        T peek();
        bool isEmpty();
        void clear();
        
    private:
        Node<T>* top;
        bool isEmptyStack();
};
#endif /* STACK_H */

