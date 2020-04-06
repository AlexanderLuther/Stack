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


template<class T>
Node<T>::Node(){
    this->value = NULL;
    this->next = NULL;
}

template<class T>
Node<T>::Node(T value){
    this->value = value;
    this->next = NULL;
}

template<class T>
void Node<T>::setValue(T value){
    this->value = value;
}

template<class T>
void Node<T>::setNext(Node<T>* next){
    this->next = next;
} 

template<class T>
T Node<T>::getValue(){
    return this->value;
}

template<class T>
Node<T>* Node<T>::getNext(){
    return this->next;
} 

#endif // NODE_HPP