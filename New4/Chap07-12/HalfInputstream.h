#ifndef HALFINPUTSTREAM_H_
#define HALFINPUTSTREAM_H_

#include "InputStream.h"

class HalfInputstream :
	public InputStream
{
protected:
	virtual void SetBase();
};

#endif