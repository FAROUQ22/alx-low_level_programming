#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/*
main - it's a start point of the program
return: always 0, success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Generated Number is: %d \n", n);
	if (n>0 || n<0){
	    if (n>0){
	        printf(" %d is a positive number", n);
	    }
	    else{
	        printf("%d is a negative number", n);
	    }
	}
	else{
	    printf("%d is a zero", n);
	}
	return (0);
}
