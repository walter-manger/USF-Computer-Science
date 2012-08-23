#include <string>
#include "birthday.h"
#include "person.h"

#ifndef STUDENT_H
#define STUDENT_H


class student
{
public:
	student();
	student(birthday p_birthday, person p_person):bday(p_birthday),
private:
	const birthday Birthday;
	const person Person;
	const int id;
};

#endif