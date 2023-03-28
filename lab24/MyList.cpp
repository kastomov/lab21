#include "MyList.h"
template<typename T>
MyList<T>::MyList(int size) {
    l = std::list<int>(size);
}

template<typename T>
T MyList<T>::operator[](int index) {

    // достаем итератор на начало
    auto it = l.begin();
    // сдвигаем итератор на нужный индекс
    std::advance(it, index);
    // возвращаем разыменованый итератор (нужный элемент)
    return *it;
}

// возвращает размер списка
template<typename T>
int MyList<T>::size() {
    return l.size();
}

// добавляет константу ко всем элементам
template<typename T>
MyList<T> MyList<T>::operator+(int element) {
    for (T n : l) {
        n += element;
    }
}



