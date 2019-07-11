#include<stdio.h>
void main()
{
int i,j,n;
int k=1;
n=5;
for(j=1;j<=5;j++)
	{k=1;
	for(i=1;i<=9;i++)
		{
		if(i>=n-(j-1)&&i<=n+(j-1))
		{	printf("%d",k);
		k=k+1;}
		else
		printf(" ");
		}

	printf("\n");
	}

}


