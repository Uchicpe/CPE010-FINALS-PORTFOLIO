#ifndef ILO_B_H
#define ILO_B_H
#include <iostream>

template<typename T>
void insertionSort(T arr[], int max_size){
    int k=1, j, temp;

    while(k < max_size){
        temp = arr[k];
        j = k-1;

        while(temp <= arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        k++;
    }
}

#endif