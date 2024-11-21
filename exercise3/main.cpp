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

    // Move to another Box
    Box movedToBox(move(box));
    cout << "Moved To Box: ";
    movedToBox.print();
    
    // Print the original
    cout << "Original Box: ";
    box.print();

    return 0;
}