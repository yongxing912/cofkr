//diamond.c
// Print a diamond figure is made of *,the line number is defined by user
#include <stdio.h>
int main()
{
	int i;
	int lineNum;
	int j;
	int lineStar;
	printf("please enter the line Number:");
	scanf("%d",&lineNum);
	for(i=0;i<lineNum;i++)
	{
		lineStar=i<lineNum/2?(2*i+1):((lineNum-i)*2-1);
		for(j=0;j<(lineNum-lineStar)/2;j++)
			printf(" ");
		for(j=0;j<lineStar;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
