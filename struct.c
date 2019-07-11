#include<stdio.h>
struct employe{
int a[10];
char b;
};
void funtion(struct employe* p){
p->b = 'a';
int i=0;
for(i=0;i<10;i++) {
	p->a[i] = i;
}
}

void printEmploye(struct employe* p) {

printf("char is:%c\n",p->b);
int i=0;
for(i=0;i<10;i++) {
	printf("%d ",p->a[i]);
}
printf("\n");

}

void main()
{
struct employe e;
struct employe *p;
p=&e;

funtion(p);
printEmploye(p);
}
