/*
 * 1) First the 100 is stored in the union, 
 * 2) Then 10.10 is overlapped on 100
 * 3) Then a => 65 (ascii) is stored in the union
 * 4) Now, finally when we start printing, 
 * 5) In the first print, we get all the clubbed values of 1092720993
 * 6) In the second print, we get the floating value, 10.099946
 * 7) In the third print, we get the 'a' as we are printing only the last byte
 */ 

#include<stdio.h>
union test{
	int i;
	float f;
	char c;
} one;

void main()
{
	one.i = 100;
	one.f = 10.10;
	one.c = 'a';
	printf("The integer i: %d\n", one.i);
	printf("The float f: %f\n", one.f);
	printf("The character c: %c\n", one.c);
}


