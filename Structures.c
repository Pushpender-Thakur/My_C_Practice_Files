#include <stdio.h>
#include "StudentStructure.h"
int main (void)
{
	struct Student Student1 = {.grade = "C",.name = "Pushpender Thakur"};
	printf("Student1 grade is %s",Student1.name);
	return 0;
}
