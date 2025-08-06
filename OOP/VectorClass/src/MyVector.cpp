#include <iostream>
#include <stdexcept> 
#include <algorithm>
#include "../inc/MyVector.hpp"

// Constructor of MyVector class.
// Takes the size and the value to fill.
// Creates an array of the given size and value to fill.
// Example: MyVector(4, 5) -> will create an array of 4 elems and
// initialize them with 5.
MyVector::MyVector(unsigned int size, int value) : m_size(size) {
	m_arr = new int[m_size];
	for(int i = 0; i < m_size; i++) 
		m_arr[i] = value;
}

// Copy constructor of MyVector class.
// Takes the Vector class instance and copies it into
// the current instance.
MyVector::MyVector(const MyVector& other) {
	this->m_size = other.m_size;
	m_arr = new int[this->m_size];

	for(int el = 0; el < this->m_size; el++) 
		this->m_arr[el] = other.m_arr[el];
}

// Frees the dynamically allocated memory.
MyVector::~MyVector() {
	delete[] m_arr;
}

// Assignes the MyVector instance into another MyVector instance.
// Uses operator overloading.
MyVector& MyVector::operator = (const MyVector& other) {
	if(this == &other) 
		return *this;
	delete[] this->m_arr;
	this->m_size = other.m_size;
	this->m_arr = new int[this->m_size];

	for(int el = 0; el < other.m_size; el++) 
		this->m_arr[el] = other.m_arr[el];

	return *this;
}

// Resizes the MyVector instance with the given n size.
// If n is bigger than the MyVector class intance size then
// it initializes the remaining part with 0 otherwise it deletes
// unneccessary parts. All done by using dynamic array.
void MyVector::resize(unsigned int n) {
	int* new_arr = new int[n];
	
	for(int i = 0; i < std::min(n, m_size); i++) 
		new_arr[i] = this->m_arr[i];

	for(int i = std::min(n, m_size); i < n; i++)
		new_arr[i] = 0;

	delete[] m_arr;

	this->m_arr = new_arr;
	this->m_size = n;
}

// Accesses the MyVector instance random element with [] operators.
// Uses operator overloading.
int& MyVector::operator[](int index) {
	if(index >= m_size || index < 0) { 
		throw std::out_of_range("Index is out of band.");
	}
	return m_arr[index];
}

// Accesses the MyVector instance random element with [] operators.
// This method is for const members.
// Uses operator overloading.
int MyVector::operator[](int index) const {
	if(index >= m_size || index < 0) { 
		throw std::out_of_range("Index is out of band.");
	}
	return m_arr[index];
		
}

// Returns MyVector instance size.
unsigned int MyVector::size() const {
	return this->m_size;
}

int main() {
	MyVector vec(4, 2);
	vec.resize(5);

	for(int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << "\n";


	return 0;
}

