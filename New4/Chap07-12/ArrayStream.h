#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.h"

class ArrayStream :
	public Stream
{
public:
	ArrayStream(const double* array, int size);
	ArrayStream(ArrayStream & );
	~ArrayStream();
	void operator=(const ArrayStream&) ;
	double Get() const;
	bool   Set() ;

private:
	double* m_array;
	int     m_size;
	int    m_i;

protected:
	virtual void SetBase();
};

#endif