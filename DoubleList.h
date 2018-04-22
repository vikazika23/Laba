#ifndef LABA0_DOUBLELIST_H
#define LABA0_DOUBLELIST_H

#include <iostream>

struct Node {
    std::string name;
    std::string surname;
    int group;
    float mark;
    Node *next, *prev;

    Node(std::string name_, std::string surname_, int group_, float mark_) {
        name = name_;
        surname = surname_;
        group = group_;
        mark = mark_;
        next = prev = nullptr;
    }

    Node() {
        next = prev = nullptr;
    }

};

class DoubleList {
private:
    Node *Tail, *Head;
public:
    DoubleList();

    int sizeList();

    bool empty();

    void pushFront(std::string name_, std::string surname_, int group_, float mark_);

    void pushBack(std::string name_, std::string surname_, int group_, float mark_);

    Node *getHead() const;

    Node front();

    Node back();

    void insert(int i, std::string name_, std::string surname_, int group_, float mark_);

    void insertList(int i, DoubleList a);

    Node popFront();

    Node popBack();

    void clean();

    Node pop(int i);

    DoubleList erase(int i, int j);

    void swap(int i, int j);

    void sort();
};


#endif //LABA0_DOUBLELIST_H

