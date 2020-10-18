#include <stdio.h>

int main(int argc, char const *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.453;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away\n", distance);
	printf("%f power \n", power);
	printf("%f super powers\n", super_power);
	printf("%c Initial\n", initial);
	printf("%s first_name\n", first_name);
	printf("%s last_name\n", last_name);

	int bugs = 100;
	double bug_rate = 1.2;

	unsigned long universe_of_defects = 1L * 10000024L * 999990000000024L * 10000000000024L *1024L;
	printf("%ld universe bugs\n", universe_of_defects);

	double part_of_universe = (bugs * bug_rate) / universe_of_defects;
	printf("%e portion of universe\n", part_of_universe);

	char nul_byte = '\0';
	printf("%c NULL\n", nul_byte);
	int care_percentage = bugs * nul_byte;
	printf("%d%% care\n", care_percentage);

	return 0;
}