#include <iostream>
#include "Box.h"
using namespace std;

// Constructor
Box::Box(int val)
{
    // Dynamically allocate memory for the value
    value = new int(val);
}

// Move Constructor

// ***** YOUR CODE GOES HERE ****** 
Box::Box(Box&& other) noexcept
{
    value = other.value;
    other.value = nullptr;
}



// Destructor
Box::~Box() 
{
    // Release the dynamically allocated memory
    delete value; 
}

// Print the value of the box
void Box::print() const 
{
    cout << "value is " << *value << endl;
}

// Set the value
void Box::setValue(int val)
{
    *value = val;
}

// Get the value
int Box::getValue() const
{
    return *value;
}



