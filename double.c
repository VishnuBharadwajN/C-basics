#include<stdio.h>
void Double (int *p){
	int i=0;
	for(i=0;i<50;i++){
		*(p+i)=2*(*(p+i));
	}

}
void main(){
int arr[50];
int* p=arr;
int i=0;
for(i=0;i<50;i++){
	arr[i]=i;
}
Double(p);
int j=0;
for(j=0;j<50;j++)
printf("%d",arr[j]);
}
