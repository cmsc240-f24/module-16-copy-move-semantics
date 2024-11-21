#ifndef BOX_H
#define BOX_H

class Box 
{
public:
    // Constructor
    Box(int value);

    // Destructor
    ~Box();

    // Copy Assignment Operator (to be implemented by the student in Box.cpp)
    Box& operator=(const Box& other);

    // Print the value of the box
    void print() const;

    // Set the value
    void setValue(int val);

    // Get the value
    int getValue() const;

private:
    int* value; // Dynamically allocated value
};

#endif