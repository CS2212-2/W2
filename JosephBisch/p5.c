// Joseph Bisch
// Intermediate C
// Program 5

#include "tools.h"

#define ARRAY_LEN 10
#define str(x) #x

double grades[ARRAY_LEN] = {3.7, 2.2, 4.3, 3.4, 3.2, 2.8, 3.9, 2.6, 4.1, 3.0};

int main() {
	banner();

	printf("type\t|variable\t|address\t|value\n");
	int i;
	for (i=0; i < ARRAY_LEN; i++) {
		double* grade = &grades[i];
		printf("%s\t|%s\t\t|%p\t|%f\n",
			"double", str(grade), (void*)grade, *grade);
	}

	bye();
	return 0;
}
/*
joseph@debian:~/code/newhaven/cprog2/p5-JosephBisch$ ./p5 


-------------------------------------------------------
	Joseph Bisch 
	CSCI 2212 
	Mon Aug 31 2015  09:43:03
-------------------------------------------------------
type	|variable	|address	|value
double	|grade		|0x601600	|3.700000
double	|grade		|0x601608	|2.200000
double	|grade		|0x601610	|4.300000
double	|grade		|0x601618	|3.400000
double	|grade		|0x601620	|3.200000
double	|grade		|0x601628	|2.800000
double	|grade		|0x601630	|3.900000
double	|grade		|0x601638	|2.600000
double	|grade		|0x601640	|4.100000
double	|grade		|0x601648	|3.000000

Normal termination.
 */
