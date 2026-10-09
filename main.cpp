#include <iostream>
#include "BST.h"

int main() {

    // Initializing a BST with integer keys and string values
    BST<int, std::string> bst1;

    // Inserting nodes into the BST
    bst1.insert(26, "Twenty-Six");
    bst1.insert(77, "Seventy-Seven");
    bst1.insert(70, "Seventy");
    bst1.insert(75, "Seventy-Five");
    bst1.insert(66, "Sixty-Six");
    bst1.insert(79, "Seventy-Nine");
    bst1.insert(68, "Sixty-Eight");
    bst1.insert(67, "Sixty-Seven");
    bst1.insert(69, "Sixty-Nine");
    bst1.insert(90, "Ninety");
    bst1.insert(85, "Eighty-Five");
    bst1.insert(83, "Eighty-Three");
    bst1.insert(87, "Eighty-Seven");
    bst1.insert(35, "Thirty-Five");
    bst1.insert(65, "Sixty-Five");
    bst1.insert(27, "Twenty-Seven");

    // Testing the inOrderPrint and reverseOrder functions
    bst1.inOrderPrint();
    bst1.reverseOrder();
    
    // Testing the print function to visualize the BST structure
    bst1.print();

    // Making sure the BST doesn't crash when it has only one node
    // BST<int, std::string> bst2;
    // bst2.insert(50, "Fifty");
    // bst2.inOrderPrint();
    // bst2.reverseOrder();
    // bst2.print();

    // Making sure the BST doesn't crash when empty
    // BST<int, std::string> bst3;
    // bst3.inOrderPrint();
    // bst3.reverseOrder();
    // bst3.print();

    return 0;
}