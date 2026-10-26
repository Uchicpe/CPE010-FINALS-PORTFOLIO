#ifndef SORTINGALGO2_H
#define SORTINGALGO2_H
#include <iostream>

template <typename T>
void shellSort(T data[], int max_size) {

    for (int gap = max_size/2; gap > 0; gap /=2) {        
        for (int i = gap; i < max_size; i++) {
            T temp = data[i];
            int j = i;
            while (j >= gap && data[j - gap] > temp) {
                data[j] = data[j - gap];
                j -= gap;
            }
            data[j] = temp;   
        }
    }
}

template <typename T>
void merge(T data[], int left, int mid, int right) {

    int sizeL = mid-left + 1;
    int sizeR = right - mid;
    T *L = new T[sizeL];
    T *R = new T[sizeR];
    for (int i = 0; i < sizeL; i++){
        L[i] = data[left + i];
    }       
    for (int j = 0; j < sizeR; j++){
        R[j] = data[mid + 1 + j];    
    }
    int i = 0, j = 0, k = left;
    while (i < sizeL && j < sizeR) {
        if (L[i] <= R[j]) {
            data[k++] = L[i++];
        } else {
            data[k++] = R[j++];
        }
    }
    while (i < sizeL) {
        data[k++] = L[i++];
    }
    while (j < sizeR) {
        data[k++] = R[j++];
    }
}

template<typename T>
void mergeSort(T data[], int left, int right) {

    if (left < right){
        int mid = left + (right - left) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

template<typename T>
int partition(T data[], int left, int right) {
  
    T pivot = data[right];
    int i = left - 1;
    for (int j = left; j <= right - 1; j++) {
        if (data[j] < pivot) {
            i++;
            std::swap(data[i], data[j]);
        }
    }
    std::swap(data[i + 1], data[right]);  
    return i + 1;
}

template<typename T>
void quickSort(T data[], int left, int right) {
    
    if (left < right) {
        int pivot = partition(data, left, right);
        quickSort(data, left, pivot - 1);
        quickSort(data, pivot + 1, right);
    }
}


#endif