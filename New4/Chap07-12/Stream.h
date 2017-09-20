#ifndef STREAM_H_
#define STREAM_H_

class Stream {
public:
	Stream();
	Stream(double n);
	virtual ~Stream();
	double Get() const; 
	bool   Set() ;
	
protected:
	virtual void SetBase() = 0;

public:
	double m_n; // åªç›ÇÃíl
};
#endif