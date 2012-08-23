/*
	Walter Manger
	U54576622
*/

#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class birthday
{
public:
	birthday(int m = 0, int d = 0, int y = 0);
	void show() const;
	~birthday();
private:
	int month;
	int day;
	int year;
};


#endif