
#ifndef CONSTANTS_H
#define CONSTANTS_H

class constants
{
public:
	constants();
	constants(int);
	int getFirst();
	void setFirst(int);
	int getSecond();
	void setSecond(int);
	int getThird();
	void setThird(int);
	void getShowValues();
	void showValues() const;
	void showSum() const; 
private:
	int first; 
	int second;
	int third;
	const int startNumber;
	int sum();
};

#endif