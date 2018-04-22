#include "DoubleList.h"

DoubleList::DoubleList() {
    Head = Tail = nullptr;
}

int DoubleList::sizeList() {

}

bool DoubleList::empty() {

}

void DoubleList::pushFront(std::string name_, std::string surname_, int group_, float mark_) {

}

void DoubleList::pushBack(std::string name_, std::string surname_, int group_, float mark_) {
    Node *temp = new Node(name_, surname_, group_, mark_);
    temp->next = nullptr;
    if (Tail == nullptr) {
        Head = Tail = temp;
    } else {
        Tail->next = temp;
        temp->prev = Tail;
        Tail = temp;
    }

}

Node DoubleList::front() {

}

Node DoubleList::back() {

}

void DoubleList::insert(int i, std::string name_, std::string surname_, int group_, float mark_) {

}

void DoubleList::insertList(int i, DoubleList a) {

}

Node DoubleList::popFront() {
    Node a;


    return a;
}

Node DoubleList::popBack() {
    Node a;

    return a;
}

void DoubleList::clean() {
    Node *a;
    while (Head) {
        a = Head->next;
        delete (Head);
        Head = a;
    }
}

Node DoubleList::pop(int i) {
    Node a;

    return a;
}

DoubleList DoubleList::erase(int i, int j) {
    DoubleList a;

    return a;
}

void DoubleList::swap(int i, int j) {

}

void DoubleList::sort() {

}

Node *DoubleList::getHead() const {
    return Head;
}
