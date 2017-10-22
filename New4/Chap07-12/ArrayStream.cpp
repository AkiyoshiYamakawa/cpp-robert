#include "ArrayStream.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

ArrayStream::ArrayStream(const double* array, int size) {
	m_array = new double[size];
	m_size = size;
	copy( array, array + m_size, m_array) ;
	m_i = 0;
}

ArrayStream::ArrayStream(ArrayStream& other) {
	m_array = new double[other.m_size];
	m_size = other.m_size;
	copy( other.m_array, other.m_array + m_size, m_array) ;
	m_i = 0;
}

ArrayStream::~ArrayStream() {
	cout << "~ArrayStream" << endl;
	delete[] m_array;
	cout << "~ArrayStream complete." << endl;
}

void ArrayStream::operator=(const ArrayStream& other){
	delete[] m_array;
	m_array = new double[other.m_size];
	m_size = other.m_size;
	copy( other.m_array, other.m_array + m_size, m_array) ;
}
void ArrayStream::SetBase() {
	m_n = m_array[m_i];
	if( m_n >= 0) {
		++m_i;
	}
}