#include <stdio.h>
#include <stdlib.h>

struct dog
{
	char *name[24];
	char *owner[24];
	float age;
};
int main(void)
{
	struct dog poppy;
	poppy.age = 40;
	printf("poppy's age is %s\n");
}

