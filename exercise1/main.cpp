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
    Box copiedBox(box);
    cout << "Copied Box: ";
    copiedBox.print();

    // Modify the copy
    copiedBox.setValue(10);
    cout << "Copied Box: ";
    copiedBox.print();


    // Print the original
    cout << "Original Box: ";
    box.print();

    return 0;
}