#include "InputStream.h"
#include <iostream>
using namespace std;

InputStream::InputStream() {};
InputStream::InputStream(double n) :
	Stream(n)
{
	cout << "InputStream()" << endl;
}


bool InputStream::Set() {
//cin >> m_n;
return m_n >= 0;
}

void InputStream::SetBase(){
	cin >> m_n;
}