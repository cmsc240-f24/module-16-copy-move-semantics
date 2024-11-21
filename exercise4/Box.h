#ifndef BOX_H
#define BOX_H

class Box 
{
public:
    // Constructor
    Box(int value);

    // Destructor
    ~Box();

    // Move Assignment Operator (to be implemented by the student in Box.cpp)
    Box& operator=(Box&& other) noexcept;

    // Print the value of the box
    void print() const;

    // Set the value
    void setValue(int val);

    // Get the value
    int getValue() const;

    // Get the pointer value
    int* getValuePointer() const;

private:
    int* value; // Dynamically allocated value
};

#endif