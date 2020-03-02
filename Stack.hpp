/* 
 * File:   Stack.h
 * Author: helmuth
 *
 * Created on 1 de marzo de 2020, 10:16
 */
#ifndef STACK_HPP
#define STACK_HPP
#include "Node.hpp"

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
#endif /* STACK_HPP */

