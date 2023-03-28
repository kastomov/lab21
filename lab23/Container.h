
#ifndef LAB21_CONTAINER_H
#define LAB21_CONTAINER_H

#define NULL 0

struct Node
{
    int data;
    Node* pNext;
};

class Container {
private:
    Node* pFirst;
    int* arr;
    int size;
public:
    Container():pFirst(NULL){};

    //todo: создать конструктор с определением размера множества
    // PS это наверно он
//    Container(int _size) : size(_size)
//    {
//        arr = new int[_size];
//    }


    class Iterator {
    protected:
        Node* iter;
    public:
        Iterator(Node* node):iter(node){};
        Iterator& operator ++ ();
        Iterator operator ++ (int);

        int get();
    };

    int& operator [] (int);
    //todo: создать перегрузку для объединения множеств (operator +)

    Iterator start();
    Iterator end();

    ~Container();
};


#endif //LAB21_CONTAINER_H
