
#ifndef b_H
#define b_H

class a;

class b
{
friend class a;

public:
	b();
	b(int,int);
	~b();
	b operator+(const b &);
	void display() const;
private:
	int x;
	int y;
};

#endif