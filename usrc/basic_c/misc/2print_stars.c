/* This program prints the stars in below format, 
   level is given as the input - 5

	*
      * * *
    * * * * *

*/

#include<stdio.h>

int main()
{
	int level;
	int i ,j;
	int temp;

	printf("Enter the level of stars: \n");
	scanf("%d", &level);

	for(i = 1; i <= level; i++) {

		j = level - i;
		while(j != 0) {
			printf(" ");
			j--;
		}
		temp = i;
		while(temp) {
			printf(" * ");
			temp --;
		}
		printf("\n");
	}
}
