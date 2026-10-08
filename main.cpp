#include <iostream>
#include "BST.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    BST<int, std::string> bst;
    bst.insert(5, "Five");
    bst.insert(3, "Three");
    bst.insert(7, "Seven");

    bst.print();

    return 0;
}