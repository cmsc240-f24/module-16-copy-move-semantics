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
    
    // Move to another Box
    Box movedToBox(move(box));
    cout << "Moved To Box: ";
    movedToBox.print();
    cout << "Pointer = " << movedToBox.getValuePointer() << endl;
    
    // Print the original
    cout << "Original Box: ";
    cout << "Pointer = " << box.getValuePointer() << endl;

    return 0;
}