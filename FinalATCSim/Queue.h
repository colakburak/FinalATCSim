#ifndef QUEUE_H
#define QUEUE_H


#include <iostream>
#include <sstream>

using namespace std;

class Queue
{
private:
    struct node
    {
        int value;
        node* next;

        node(int value, node* next = nullptr)
        {
            this->value = value;
            this->next = next;
        }
    };

    node* front, * back;

public:
    //Constructor
    Queue()
    {
        front = nullptr;
        back = nullptr;
    }

    //Class methods:
    void push(int num);
    int pop();
    bool isEmpty() { return (front == nullptr); }
    string print();
};

#endif QUEUE_H