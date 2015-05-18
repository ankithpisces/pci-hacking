 /* Prints the *
 * Enter the level of stars: 4

 *
 * *
 * * *
 * * * *
 * * *
 * *
 *

*/


#include<stdio.h>

int main()
{
        int level;
        int i ,j;

        printf("Enter the level of stars: \n");
        scanf("%d", &level);

        for(i = 1; i <= level; i++) {
                j = i;
                while(j != 0) {
                        printf("* ");
                        j--;
                }
                printf("\n");
        }

        for(i = level - 1; i > 0; i--) {
                j = i;
                while(j != 0) {
                        printf("* ");
                        j--;
                }
                printf("\n");
        }
}


