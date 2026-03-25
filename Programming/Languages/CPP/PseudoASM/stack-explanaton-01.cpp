#include <iostream>

// This function expects two doubles to be put onto the stack before invocation.
double multiply(double x, double y)
{
	return x * y;
	// PSEUDO ASM
	// 	PUSH RETVAL
	// 	SET RETVAL AS X
	// 	MULTIPLY RETVAL TIMES Y
}

int main(int argc, char **argv)
{
	// The following line tells the opperating system to put three doubles
	// onto the stack.
	double a, b, c;
	a = 2.5;
	b = 4.25;

	// The following function invocation implicitly puts copies of a and b
	// onto the stack.
	// PSEUDO ASM
	// 	PUSH X
	// 	PUSH Y
	// 	INVOKE multiply
	// 	SET C AS RETVAL
	// 	POP RETVAL
	// 	POP X
	// 	POP Y
	c = multiply(a, b);
	std::cout << c << std::endl;
	return 0;
}
