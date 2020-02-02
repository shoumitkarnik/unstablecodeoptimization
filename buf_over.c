#include<stdio.h>
int main(int argc , int * argv){
	char *buf;
	char *buf_end="Akshyacnasclasn";
	unsigned int len=(int)argv[1];
	if(buf+len>=buf_end)
	{
		printf("\n%d",len);
			}
	if(buf+len<buf)
	{
	printf("\n%d",len)	;
}
	buf="something";
	printf("\n%s\n",buf );
}
