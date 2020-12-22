/* Find the reciprocal of a given integer */
#include <stdio.h>

float function(float i){

for ( i = 100; i >= 0; i--);
return(i);
}

int main()
{ 
	int i;		/* The loop will work as long as i <10, and after each iteration the variable i will increase by 1 */
	for ( i = 100; i >= 0; i--) { /* The condition is checked before each repetition, that is, the loop will stop when the i variable is equal to 10 */
	printf ("%d\n", i );
	}
	return 0;
}
