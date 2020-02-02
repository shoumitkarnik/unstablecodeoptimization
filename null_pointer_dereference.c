#include<stdio.h>
#include<errno.h>
struct ak{
	int propno;
	char div;
};
struct foo {

	int id;
	int phone;
	char *name;
	struct ak k1;
} a;
struct foo* getfoo(){
	int i,j;
	char l[100];
	scanf("%d",&i);
	//gets(l);
	if(i>10)
	{
	 
	 a.id=1;
	 a.phone=1000;
	 a.name="Akshay";

	 return &a;
	}
	else 
		return NULL;
}
int main(){
struct foo *s = getfoo();
printf("OK	");
struct ak b = s->k1;
if(!s){
	printf("Null Object");
	}

printf("Id = %d",s->id);

}
