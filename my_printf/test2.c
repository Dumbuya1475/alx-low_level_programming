#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/**
	 * declearing a structure
 	*/
	struct student
	{
		int age;
		char *name;
		float score;
	};
	/** Initalization */
	struct student str1 = {20, "John", 12.5};
	struct student str2 = {50, "James", 10.5};

	printf("%d", str2.score);
}

