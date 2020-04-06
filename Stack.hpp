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


template <class T>
Stack<T>::Stack(){
    this->top = NULL;
}

/*
 * Metodo encargado de apilar un nuevo elemento en la cima de la pila.
 * Crea un nuevo nodo con el valor que recibe como parametro  y le asigna a su siguiente 
 * el nodo apuntado por top. Por ultimo asigna a top el nodo recien creado. 
 */
template <class T>
void Stack<T>::push(T value){
    Node<T>* node = new Node<T>(value);
    node->setNext(top);
    top = node;
}

/*
 * Metodo encargado de desapilar el elemento de la cima de la pila.
 * Valida si la pila se encuentra o no vacia, si esta vacia se lanza una excepcion, de lo 
 * contrario:
 *  1. crea un nuevo nodo que apunta hacia el top.
 *  2. Se establece el top al siguiente del nodo actual.
 *  3. Se almacena el valor contenido dentro del nodo actual.
 *  4. Se elimina el nodo actual. 
 *  5. Se retorna el valor almacenado.
 */
template <class T>
T Stack<T>::pop(){
    if(!this->isEmptyStack()){
        Node<T>* node = this->top;
        top = node->getNext();
        T value = node->getValue();
        delete node;
        return value;
    }
    return T(NULL);
}

/*
 * Metodo encargado de obtener y devolver el valor contenido en la cima de la pila.
 * Devuelve el valor contenido dentro del nodo que es apuntado por top.
 */
template <class T>
T Stack<T>::peek(){
    if(!this->isEmptyStack()){
        return this->top->getValue();
    }
}

/*
 * Metodo encargado de validar si la pila se encuentra vacia.
 * Si el puntro top apunta a NULL devuelve true.
 */
template <class T>
bool Stack<T>::isEmpty(){
    return top == NULL;
}

/*
 * Metodo encargado de vaciar la pila.
 * Recorre cada nodo hasta que la pila se encuentre vacia, elimina cada nodo recorrido.
 */
template <class T>
void Stack<T>::clear(){
    Node<T>* node;
    while(!this->isEmpty()){
        node = this->top;
        top = top->getNext();
        delete node;    
    } 
}

/*
 * Metodo encargado de verificar si la pila esta vacia y lanzar una excepcion.
 * Caso contario devuelve false.
 */
template <class T>
bool Stack<T>::isEmptyStack(){
    if(this->isEmpty()){
        std::string msg = "Error: La pila se encuentra vacia"; 
        throw msg;
    }
    return false;
}

#endif /* STACK_HPP */

