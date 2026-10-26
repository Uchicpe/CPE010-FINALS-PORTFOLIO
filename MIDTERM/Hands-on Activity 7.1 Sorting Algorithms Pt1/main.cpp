#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sortingAlgo.h"

const int max_size = 100;
void displayArr(int arr[]);

int main() {

    // create an array with unsorted list with 100 maximum size
    int unsortedArr[max_size];
    // use time (0) as seed for random values
    srand(time(0));
    // populate the array with random values
    for(int i = 0; i < max_size; i++){
        unsortedArr[i] = rand()%5 +1;
    }
    displayArr(unsortedArr);

    //std::cout<<"\n Bubble Sort Testing: \n";
    //bubbleSort(unsortedArr, max_size);
    //displayArr(unsortedArr);

    //std::cout<<"\n Selection Sort Testing: \n";
    //selectionSort(unsortedArr, max_size);
    //displayArr(unsortedArr);

    std::cout<<"\n Insertion Sort Testing: \n";
    insertionSort(unsortedArr, max_size);
    displayArr(unsortedArr);

}

void displayArr(int arr[]){
    for (int i = 0; i < max_size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}