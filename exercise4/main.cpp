#include <iostream>
#include <utility>
#include "Box.h"
using namespace std;

int main() 
{
    // Create a Box
    Box box(42); 
    cout << "Original Box: ";
    box.print();
    cout << "Pointer = " << box.getValuePointer() << endl;
    
    // Create another Box
    Box anotherBox(10);
    cout << "Another Box: ";
    anotherBox.print();
    cout << "Pointer = " << anotherBox.getValuePointer() << endl;
    
    // Move to another Box
    anotherBox = move(box);
    cout << "Another Box after Move: ";
    anotherBox.print();
    cout << "Pointer = " << anotherBox.getValuePointer() << endl;
    
    // Print the original
    cout << "Original Box: ";
    cout << "Pointer = " << box.getValuePointer() << endl;

    return 0;
}