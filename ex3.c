#include <stdlib.h>
#include<stdio.h>
# define min(a, b) ((a)<(b) ? (a) : (b))
int main(int argc, char *argv[]) {
	int i = 1;
	int temp = atof(argv[i]);
	for (i = 1; i < argc; i++)  temp = min(temp, atof(argv[i]));
	printf("Min parameter is %d\n", temp);}
