#include "ArrayStream.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

ArrayStream::ArrayStream(double* array, int size) {
	m_array = array;
	copy( array, array + size, m_array) ;
	m_i = 0;
}

ArrayStream::~ArrayStream() {
	cout << "~ArrayStream" << endl;
	delete[] m_array;
	cout << "~ArrayStream complete." << endl;
}

void ArrayStream::SetBase() {
	m_n = m_array[m_i];
	if( m_n >= 0) {
		++m_i;
	}
}