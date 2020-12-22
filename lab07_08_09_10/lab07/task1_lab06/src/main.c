#include<stdio.h>
#include<string.h>
/* sorting an array using the bubble method*/

void display(int arr[5]);
int main(void)//вывод числа//
{
    int arr[5]={5,4,10,4,5};	/* arr - array; size array */
	
	int i=0;
	int j=0;
	int q;

	for ( i = 0; i < 5 - 1; i++ ) {
		for ( j = 0; j < 5 - i - 1; j++) {
			if (arr[j] >  arr[j + 1]) {
			
			q = arr[j];
			arr [j] = arr[j + 1];
			arr [j + 1] = q;
			}
		}
	}
	/**/
	for ( i = 0; i < 5; i++) {
		printf (" %d ",arr[i]);
		}
	display(arr);
	return 0;
	}
void display(int arr[5]) {
	int i;
	for ( i = 0; i < 5 - 1; i++ ) printf ("%d", arr[i]);
	}
	
