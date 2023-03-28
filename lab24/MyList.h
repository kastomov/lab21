#include "iostream"
#include "list"

#ifndef LAB21_MYLIST_H
#define LAB21_MYLIST_H


class MyList {
private:
    std::list<int> l;
public:
    MyList(int size);
    ~MyList();

    int operator[](int index);
    int operator()();
    MyList operator+(int element);
};


#endif //LAB21_MYLIST_H
