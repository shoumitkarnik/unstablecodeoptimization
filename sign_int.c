#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	printf("Enter the value for a:");
	scanf("%d",&i);
	int y= abs(i);
	if(y+100 <0)
	{
		printf("signed integer overflow detected");
		exit(2);

	}
	printf("%d\n",i);
}
