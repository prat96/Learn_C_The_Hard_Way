#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0;

	if (argc == 2){
		printf("Only one arg whaaaaa!\n");
	} else if (argc > 1 && argc < 4){
		printf("this ones whaaa:\n");
	
		for (int i = 0; i < argc; ++i){
			printf("%s\n", argv[i]);
		}
		printf("\n");
	} else {
		printf("Noo brooo\n");
	}


	return 0;
}