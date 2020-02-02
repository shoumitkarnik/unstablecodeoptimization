#include<stdio.h>
#include<stdlib.h>
int main()
{	int i;	
	printf("Enter the value for a:");	
	scanf("%d",&i);	
	if(abs(i)<0)	{		
		printf("int min caught");	}	
	printf("%d\n",i);
}
