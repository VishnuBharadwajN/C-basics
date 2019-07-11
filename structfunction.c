#include<stdio.h>
struct employee{
char a[10];
int b[10];
char c;
};
void employeeid(struct employee* p){
int i=0;
for(i=0;i<10;i++){
p->b[i]=i;
}
p->c='f';
}
void printemployee(struct employee* p){
int j=0;
printf("the id of the empolyee is:");
printf("\n");
for(j=0;j<10;j++){
printf("%d",p->b[j]);
}
}
void main(){
struct employee e;
struct employee* p;
p=&e;
employeeid(p);
printemployee(p);
}
