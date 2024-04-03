#include <iostream>

#include "LinkedList/LinkedList.h"

using namespace std;

int main() {
  LinkedList<int> myList;

    // Inserting elements into the linked list
    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.insert(40);
    myList.insert(50);

    // Displaying the elements in the linked list
    std::cout << "Elements in the linked list: ";
    myList.display(); // Output: 30 20 10

    // Removing an element from the linked list
    myList.remove(20);

    // Displaying the elements in the linked list after removal
    std::cout << "Elements in the linked list after removal: ";
    myList.display(); // Output: 30 10

    // Searching for an element in the linked list
    int searchElement = 30;
    if (myList.search(searchElement)) {
        std::cout << searchElement << " is found in the linked list." << std::endl;
    } else {
        std::cout << searchElement << " is not found in the linked list." << std::endl;
    }

    // Getting the size of the linked list
    std::cout << "Size of the linked list: " << myList.getSize() << std::endl;

    return 0;
}