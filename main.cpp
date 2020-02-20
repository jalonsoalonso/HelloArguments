//Comment next line to use C version or uncomment for C++ version
#define CPLUSPLUS
#ifdef CPLUSPLUS

#include <iostream>
int main(int argc, char *argv[])
{
	std::cout << "There are " << argc << " arguments:" << std::endl;
	for (int i = 0; i < argc; ++i)
	{
		std::cout << argv[i] << std::endl;
	}
}

#else

#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("There are %d arguments:\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
}

#endif
