
#ifndef a_H
#define a_H

class b;

class a
{
public:
	a(int,int);
	~a();
	void display(b &in) const;
private:
	int x;
	int y;
};

#endif