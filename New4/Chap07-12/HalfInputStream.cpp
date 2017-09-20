#include "HalfInputstream.h"
#include <iostream>
using namespace std;

void HalfInputstream::SetBase() {
	InputStream::SetBase();
	m_n /= 2;
}