#ifndef SORTINGALGO_H
#define SORTINGALGO_H
#include <iostream>

template<typename T>
void bubbleSort(T arr[], int max_size){
    for(int i = 0; i<max_size; i++){
        for(int j = i+1; j < max_size; j++){
            // arr[i] // represent the first element
            if(arr[i]>arr[j]){
                std::swap(arr[j],arr[i]);
            }   
        }
    }
}

template<typename T>
int routineSmallest(T arr[], int K, int max_size){
    int position;
    T smallestElem = arr[K];
    position = K;

    for(int j=K+1; j < max_size; j++){
        if(arr[j] < smallestElem){
            smallestElem = arr[j];
            position = j;
        }
    }
    return position;
}

template<typename T>
void selectionSort(T arr[], int max_size){
    int POS;
    for(int i = 0; i < max_size; i++){
        POS=routineSmallest(arr, i , max_size);
        std::swap(arr[i], arr[POS]);
    }
}

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

/*
template<typename T>
void insertionSort2(T arr[], int max_size){
    for(int k=1; k < max_size; k++){
        T temp = arr[k];
        int j = k-1;
        for(; j >=0 && temp <= arr[j]; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
        k++;
    }
}
*/    

#endif