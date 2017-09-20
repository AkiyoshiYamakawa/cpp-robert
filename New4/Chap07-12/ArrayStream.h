#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.h"

class ArrayStream :
	public Stream
{
public:
	ArrayStream(double* array, int size);
	~ArrayStream();
	double Get() const;
	bool   Set() ;

private:
	double* m_array;
	int    m_i;

protected:
	virtual void SetBase();
};

#endif