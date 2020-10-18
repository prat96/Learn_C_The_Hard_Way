#include <stdio.h>

int main(int argc, char const *argv[])
{

	int i = 0;
	printf("%s\n", argv[0]);
	while (i < 25){
		printf("%d\n", i);
		++i;
	}

	int test[] = {4,5,76};
	printf("%d\n", test[1]);

	return 0;
}