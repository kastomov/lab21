#include "MyList.h"

MyList::MyList(int size) {
    l = std::list<int>(size);
}

int MyList::operator[](int index) {

    // достаем итератор на начало
    auto it = l.begin();
    // сдвигаем итератор на нужный индекс
    std::advance(it, index);
    // возвращаем разыменованый итератор (нужный элемент)
    return *it;
}

// возвращает размер списка
int MyList::operator()() {
    return l.size();
}

// добавляет константу ко всем элементам
MyList MyList::operator+(int element) {
    for (int n : l) {
        n += element;
    }
}

MyList::~MyList() {

}


