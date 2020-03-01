/* 
 * File:   main.cpp
 * Author: helmuth
 *
 * Created on 1 de marzo de 2020, 10:12
 */

#include <cstdlib>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    try{
        Stack<char> stack;
       
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');
    stack.push('9');
    while(!stack.isEmpty()){
        cout<< stack.pop() << " ";
    }
    
    return 0;
    
    
    }
    catch(string e){
        cout<<e;
    }
   
}

