#include <iostream>
#include "DoubleList.h"

int main() {
    DoubleList A;
    int i, k;
    std::cout << "Enter the number of items: ";
    std::cin >> k;

    for (i = 0; i < k; i++) {
        A.pushBack("Vasa", "Pupok", 6457, 99);
    }
    Node *B;
    B = A.getHead();
    i = 1;
    for (; B != nullptr; B = B->next) {
        std::cout << i << " Student:" << std::endl;
        std::cout << B->name << std::endl;
        std::cout << B->surname << std::endl;
        std::cout << B->group << std::endl;
        std::cout << B->mark << std::endl;
        i++;
    }
    A.clean();
    return 0;
}
