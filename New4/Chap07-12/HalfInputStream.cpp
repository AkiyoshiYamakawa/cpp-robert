#include "HalfInputstream.h"
#include <iostream>
using namespace std;

void HalfInputStream::SetBase() {
	InputStream::SetBase();
	m_n /= 2;
}