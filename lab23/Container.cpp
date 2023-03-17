
#include "Container.h"

Container::Container(int _size) {

    arr = new int[_size];
}

Container::~Container() {
    delete[] arr;
}

int &Container::operator[](int index) {

    Node* temp = pFirst;
    for (int i = 0; i < index; i++)
        temp = temp->pNext;
    return temp->data;
}

Container::Iterator Container::start() {
    return Container::Iterator(pFirst);
}

Container::Iterator Container::end() {
    return Container::Iterator(NULL);
}

Container::Iterator &Container::Iterator::operator++() {
    iter = iter->pNext;
    return *this;
}

Container::Iterator Container::Iterator::operator++(int) {
    Container::Iterator temp(iter);
    iter = iter->pNext;
    return temp;
}

int Container::Iterator::get() {
    return iter->data;
}
