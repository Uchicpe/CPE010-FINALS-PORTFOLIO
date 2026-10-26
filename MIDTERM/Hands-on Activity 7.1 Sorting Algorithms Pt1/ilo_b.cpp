#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include "ilo_b.h"

const int max_size = 100;
void displayVotes(int arr[]);
int totalVotes(int voteArr[], const int& arrSize);

const std::string candidateL[5] = {
    "Bo Dalton Capistrano",
    "Cornelius Raymon Agustín",
    "Deja Jayla Bañaga",
    "Lalla Brielle Yabut",
    "Franklin Relano Castro"
};

int main(){

    int unsortedVotes[max_size];
    srand(time(0));
    for(int i = 0; i < max_size; i++){
        unsortedVotes[i] = rand()%5 + 1;
    }

    std::cout << "Unsorted Votes:\n";
    displayVotes(unsortedVotes);
    std::cout << std::endl;

    int majorVoted = totalVotes(unsortedVotes, max_size);
    std::cout << "\nCandidate " << candidateL[majorVoted] << " is the Winner!!!";
}

void displayVotes(int arr[]){

    for (int i = 0; i < max_size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int totalVotes(int arr[], const int& max_size){

    int votes[5] = {0};
    int total = votes[0];
    int majorVotes = 0;
    insertionSort(arr, max_size);

    std::cout << "Sorted Votes:\n";
    for (int i = 0; i < max_size; i++){
        std::cout << arr[i] << " ";
        votes[arr[i] - 1]++;
    }
    
    std::cout << "\n\nCandidates' Total Votes:\n";
    for (int i = 0; i < 5; i++){
        if (votes[i] > total) {
        total = votes[i];
        majorVotes = i;
        }
        std::cout << candidateL[i] << " with " << votes[i] << " votes\n";
    }
    return majorVotes;
}
