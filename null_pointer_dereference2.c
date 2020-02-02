#include<stdio.h>
#include<errno.h>
struct s1{
	int propno;
	char div;
};
struct foo {

	int id;
	int phone;
	char *name;
	struct s1 k1;
} a;
struct foo* getfoo(int i){
	char l[100];
	if(i>10)
	{
	 a.id=1;
	 a.phone=1000;
	 a.name='"Some_Text_Here";
	 return &a;
	}
	else 
		return NULL;
}
int main(){
int i ;
scanf("%d",&i);
printf("OK");
if(getfoo(i)){
	struct foo *s = getfoo(i);
	printf("Id = %d",s->id);
}
else{
	printf("Null Object");
	}

}
