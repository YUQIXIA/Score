#include "score.h"
#include <stdio.h>
void output_results(const int m[], const int stat[])
{
	int i;
	printf("This are the marks: \n");
	for(i=0; i<MAX &&m[i]!=-1; ++i){
		printf("%d \n",m[i]);
	}
	printf("\n Here are the statistics: \n");
	for(i=0; i<6; i++){
		printf("Mark %d:&d hits \n",i,stat[i]);
		}
}
