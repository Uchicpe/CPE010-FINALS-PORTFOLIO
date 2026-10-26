#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H
#include <iostream>
#include <string>

class Job {
public:
    int userID;
    std::string userName;
    int num_pages;
};

class Printer {
private:
    Job *q_array;
    size_t q_capacity;
    size_t q_size;
    int q_front, q_back;

public:
    //Constructor
    Printer(size_t capacity = 10);
    //Methods
    bool isEmpty() const;
    bool isFull() const;
    void Clear();
    void addedJob(Job value);
    Job deleteJob();
    void DisplayJob();
    void JobProcess();
    //Destructor
    ~Printer();
};

//Constructor
Printer::Printer(size_t capacity) {
    q_capacity = capacity;
    q_size = 0;
    q_front = 0;
    q_back = -1;
    q_array = new Job[q_capacity];
}

bool Printer::isFull() const {
    return q_size == q_capacity;
}

bool Printer::isEmpty() const {
    return q_size == 0;
}

void Printer::Clear() {
    q_size = 0;
    q_front = 0;
    q_back = -1;
}

void Printer::addedJob(Job value) {
    //Check if the Queue(Job) is full
    if (isFull()) {
        std::cout << "The Printer is full.\n";
        return;
    }
    q_back = (q_back + 1) % q_capacity;
    q_array[q_back] = value;
    q_size++;

    std::cout << "Job had been added.\n";
}

Job Printer::deleteJob() {
    //Check if the Queue(Job) is empty
    if (isEmpty()) {
        std::cout << "The Printer is empty\n";
        return Job();
    }

    Job tail = q_array[q_front];
    q_front = (q_front + 1) % q_capacity;
    q_size--;

    //Reset index when Queue(Job) is empty
    if (isEmpty()) {
        Clear();
    }
    return tail;
}

void Printer::DisplayJob() {
    if (isEmpty()) {
        std::cout << "No Job Currently...\n";
        return;
    }
    //Use For Loop to Display Jobs 
    int size = q_front;
    for (size_t i = 0; i < q_size; i++) {
        std::cout << "ID: " << q_array[size].userID << " Username: "
                  << q_array[size].userName << " Pages: " << q_array[size].num_pages << std::endl;

        size = (size + 1) % q_capacity;
    }
}
//Destructor
Printer::~Printer() {
    delete[] q_array;
}

void Printer::JobProcess() {
    if (isEmpty()) {
        std::cout << "No Job Currently...\n";
        return;
    }
    while (!isEmpty()) {
        Job tail = deleteJob();
        std::cout << "Printing Job ID: " << tail.userID << " Username: " << tail.userName << " Pages: "
                  << tail.num_pages << std::endl;
    }
    std::cout << "Job has been Printed.\n";
}
#endif