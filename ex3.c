#include <stdio.h>

int main()
{
	char given_name[] = "John";
	char family_name[] = "Harrison";
        char initial = given_name[0];
	int age = 33;
	int height_in_cm = 182;
        float cm_in_foot = 183.0 / 6.0;
	float height_in_feet = height_in_cm / cm_in_foot;

	printf("My name is %c. %s.\n", initial, family_name);
	printf("I am %d years old.\n", age);
	printf("I am %dcm tall.\n", height_in_cm);
	printf("I am %f feet tall.\n", height_in_feet);

	return 0;
}

