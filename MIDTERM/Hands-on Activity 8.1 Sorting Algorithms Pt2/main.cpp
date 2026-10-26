#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sortingAlgo2.h"

const int max_size = 100;
void displayArr(int arr[]);

int main(){

    int unsortedArr[max_size];
    //int unsortedArr[max_size] = {4, 34, 29, 48, 53, 
        //87, 12, 30, 44, 25, 93, 67, 43, 19, 74};

    srand(time(0));
    for(int i = 0; i < max_size; i++){
        unsortedArr[i] = rand()%100;
    }
    
    //std::cout << "Unsorted Array:\n";
    //displayArr(unsortedArr);
    
    //std::cout << "\nShell Sorting:\n";
    //shellSort(unsortedArr, max_size);
    //displayArr(unsortedArr);

    std::cout << "\nMerge Sorting:\n";
    mergeSort(unsortedArr, 0, max_size-1);
    displayArr(unsortedArr);

    //std::cout << "\nQuick Sort:\n";
    //quickSort(unsortedArr, 0, max_size-1);
    //displayArr(unsortedArr);

    return 0;
}

void displayArr(int arr[]){
    for(int i = 0; i < max_size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
