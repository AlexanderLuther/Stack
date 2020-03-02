/* 
 * File:   Node.hpp
 * Author: helmuth
 *
 * Created on 25 de febrero de 2020, 02:21
 */
#ifndef NODE_HPP
#define NODE_HPP 
#include <iostream>

template <class T> 
class Node{
    
    private:    
        T value ;
        Node<T>* next;
        
    public:
        Node();
        Node(T value);
        void setValue(T value);
        void setNext(Node<T>* next);
        T getValue();
        Node<T>* getNext();
};
#endif // NODE_HPP

