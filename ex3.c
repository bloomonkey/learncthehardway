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

        printf("Name:\v%c. %s.\n", initial, family_name);
	printf("Age:\v%d years.\n", age);
	printf("Physical Description:\n");
	printf("\tHeight in cm: %d\n", height_in_cm);
	printf("\tHeight in feet: %f\n", height_in_feet);

	return 0;
}

