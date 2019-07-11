#include<stdio.h>
void main(){
char d='*';
int i,j;
int a=10;
	for(i=1;i<=10;i++)
	{
	   for(j=1;j<=5;j++)
		{
			if((i>=2&&i<=9)&&(j>=2&&j<=4))
				{
				printf(" ");
				}
			else
			printf("%c",d);
	
		}
	printf("\n");
	}	
}
