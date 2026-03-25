#include <iostream>

void for_loop()
{
	for (int i = 1; i <= 5; i++)
	{
		std::cout << i << std::endl;
	}
}

// While loops are also called pre-check loops, in which the condition of the
// loop is checked before executing the loop.
void while_loop()
{
	int i = 1;
	while (i <= 5)
	{
		std::cout << i << std::endl;
		i++;
		// i = i + 1;
		// ++i;
	}
}

// Do while loops are also called post-check loops, in which the condition of
// the loop is checked after executing the loop.
void do_while_loop()
{
	int i = 0;
	do
	{
		i++;
		std::cout << i << std::endl;
	}
	while (i < 5);
}

int main(int argc, char **argv)
{
	std::cout << "For Loop" << std::endl;
	for_loop();
	std::cout << std::endl << std::endl;

	std::cout << "While Loop" << std::endl;
	while_loop();
	std::cout << std::endl << std::endl;

	std::cout << "Do While Loop" << std::endl;
	do_while_loop();
	std::cout << std::endl << std::endl;

	return 0;
}
