#pragma once

class MyVector {
public:
    // Creates an array of the given size, with all values initialized to 'value'.
    // For example, calling MyVector(4, 2) should create the array {2, 2, 2, 2}.
    MyVector(unsigned int size, int value = 0);

    MyVector(const MyVector& other);

    ~MyVector();

    // Assignment operator
    MyVector& operator = (const MyVector& other);

    // Changes the size of the array.
    // If the new size is larger than the current size, new elements are initialized to 0.
    // For example, calling resize(5) on the array {2, 3, 4} results in {2, 3, 4, 0, 0}.
    // Calling resize(2) afterward results in {2, 3}.
    void resize(unsigned int n);

    // Enables access to array elements using the [] operator.
    int& operator[](int);
    int operator[](int) const;

    // Returns the size of the array.
    unsigned int size() const;

private:
    int* m_arr;
    unsigned int m_size;
};
