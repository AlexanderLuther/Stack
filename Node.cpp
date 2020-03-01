/* 
 * File:   Node.cpp
 * Author: helmuth
 * 
 * Created on 25 de febrero de 2020, 02:21
 */
#include "Node.h"

template<typename T>
Node<T>::Node(){
    this->value = NULL;
    this->next = NULL;
}

template<typename T>
Node<T>::Node(T value){
    this->value = value;
    this->next = NULL;
}

template<typename T>
void Node<T>::setValue(T value){
    this->value = value;
}

template<typename T>
void Node<T>::setNext(Node<T>* next){
    this->next = next;
} 

template<typename T>
T Node<T>::getValue(){
    return this->value;
}

template<typename T>
Node<T>* Node<T>::getNext(){
    return this->next;
} 

