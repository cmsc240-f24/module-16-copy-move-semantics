#ifndef BOX_H
#define BOX_H

class Box 
{
public:
    // Constructor
    Box(int value);

    // Move Constructor (to be implemented by the student in Box.cpp)
    Box(Box&& other) noexcept;

    // Destructor
    ~Box();

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