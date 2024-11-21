#include <iostream>
#include "Box.h"
using namespace std;

int main() 
{
    // Create a Box
    Box box(42); 
    cout << "Original Box: ";
    box.print();

    // Create a copy of Box
    Box anotherBox(100);
    cout << "Another Box: ";
    anotherBox.print();

    // Copy box to anotherBox using assignment
    anotherBox = box;

    // Print anotherBox after the copy
    cout << "Another Box: ";
    anotherBox.print();

    // Modify another box
    anotherBox.setValue(222);
    cout << "Another Box: ";
    anotherBox.print();

    // Print the original
    cout << "Original Box: ";
    box.print();

    return 0;
}