#include "iostream"
#include "list"

#ifndef LAB21_MYLIST_H
#define LAB21_MYLIST_H

template<typename T>
class MyList {
private:
    std::list<T> l;
public:
    MyList(int size);

    T operator[](int index);
    int size();
    MyList<T> operator+(int element);
};


#endif //LAB21_MYLIST_H