//
// Created by Tom Guo on 09/10/2017.
//

#ifndef CPP_PRIMER_PLUS_OUTPUT_H
#define CPP_PRIMER_PLUS_OUTPUT_H

#include <iostream>

using namespace std;

template <class T>
void outputArray(T arr[], int size){
    for(int i = 0; i < size; i++)
        if(i < size - 1)
            cout<<arr[i]<<" ";
    cout<<endl;
}

#endif //CPP_PRIMER_PLUS_OUTPUT_H
