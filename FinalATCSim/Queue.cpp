#include "Queue.h"


//I use article on Stackoverflow about pointer values on this methods

string Queue::print()
{
    ostringstream qss;

    node* tmp = this->front;
    qss << "[ ";
    while (tmp != nullptr) {
        qss << tmp->value << " ";
        tmp = tmp->next;
    }
    qss << "]"<<endl;

    return qss.str();
}

void Queue::push(int num)
{
    node* tmp = new node(num, nullptr);
    if (!isEmpty()) { // if not empty
        back->next = tmp;
        back = tmp;
        return;
    }

    // if list is empty
    front = tmp;
    back = tmp;
}

int Queue::pop()
{
    if (isEmpty()) return 0;
    int num = front->value;
    if (front->next == nullptr) { // if list have only one element
        delete front;
        front = nullptr;
        back = nullptr;
        return num;
    }
    node* temp = front;
    front = front->next;
    delete temp;
    return num;
}
