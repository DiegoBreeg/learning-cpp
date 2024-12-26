#include <iostream>

int main()
{
	int n{5};

	if(true)
	{
		n = 10;
	}

	std::cout << n << '\n';
	return 0;
}