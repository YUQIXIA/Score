#include "score.h"
#include <stdio.h>
void input_scores(int s[])
{
	int i,input=0;
	printf("Enter scores,-1 to stop:\n ");
	for (i=0;i<MAX && input != -1;++i)
	{
		printf("%d",i+1);
		scanf("%d", &input);
		s[i]=input;
	}
	if(i==MAX && s[i-1]!=-1 ){
	printf("%d scores are given.\n",i-1);
	}
	else
	printf("%d scores are given.\n",i-1);
}
