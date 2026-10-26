#include <iostream>
#include <string>
#include "queueArray.h"

int main() {
    //Classes
    Printer printer(10);
    Job tail;

    //Main Printing Program
    int choice;
    while (choice != 6) {
        std::cout << "\n--- OFFICE PRINTER ---\n";
        std::cout << "1. Add Job\n";
        std::cout << "2. Process Job/s\n";
        std::cout << "3. Remove Job\n";
        std::cout << "4. Display Job/s\n";
        std::cout << "5. Clear Job/s\n";
        std::cout << "6. Exit Program\n";
        std::cout << "\nInput your choice: ";
        std::cin >> choice;

        switch (choice){
        case 1: std::cout << "Job ID: ";
                std::cin >> tail.userID;
                std::cout << "Username: ";
                std::cin >> tail.userName;
                std::cout << "Number of Pages: ";
                std::cin >> tail.num_pages;
                std::cout << std::endl;

                printer.addedJob(tail);
                break;
        case 2: printer.JobProcess();
                break;
        case 3: tail = printer.deleteJob();
                break;
        case 4: printer.DisplayJob();
                break;
        case 5: printer.Clear();
                std::cout << "Print Jobs Cleared.";
                break;
        case 6: std::cout << "Printing Program Ended.";
                break;
        default: std::cout << "Invalid Choice. Try Again.\n";
                break;
        }
    }

    return 0;
}
