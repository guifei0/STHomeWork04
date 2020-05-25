#include "Student.h"

Student::Student() {

}

Student::~Student() {

}

double Student::charge(double Money) {
	return Money >= 100 ? Money - 10 : Money;
}
