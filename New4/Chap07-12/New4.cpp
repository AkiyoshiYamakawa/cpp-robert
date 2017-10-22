#include "InputStream.h"
#include "HalfInputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

Stream* CreateStream(){
	char ch;

	while(true) {
		cout << "i: InputStream, h:HalfInputStream a: ArrayStream ==> " << flush;
		cin >> ch;

		switch(ch) {
		case 'i':
			return new InputStream();
		case 'h':
			return new HalfInputStream();
		case 'a':
			while(true) {
				cout << "”z—ñ‚ð‚¦‚ç‚ñ‚Å‚­‚¾‚³‚¢ (1,2) > " << flush;
				cin >> ch;
				if( ch =- '1') {
					static double ARRAY[] = { 1, 2, 3, -1 };
					static const int SIZE = sizeof ARRAY / sizeof *ARRAY;
					return new ArrayStream(ARRAY, SIZE);
				}else if(ch == '2') {
					static double ARRAY[] ={0.5, 1.5, -1 };
					static const int SIZE = sizeof ARRAY / sizeof * ARRAY;
					return new ArrayStream(ARRAY, SIZE);
				}
			}
		}
	}
}

double Sum(Stream& stream) {
	double sum = 0;
	while(stream.Set()) {
		sum += stream.Get();
	}
	return sum;
}

int main() {
	for(int i=0; i<5; ++i) {
		Stream* stream = CreateStream();
		double sum = Sum(*stream);
		cout << "‡Œv: " << sum << endl;
		delete stream;
	}
}