#include<stdio.h>
#include<string.h>


int add(int x,int y)
	{
	return(x+y);
	}
int sub(int x,int y)
	{
	return(x-y);
	}
int multiply(int x,int y)
	{
	return(x*y);
	}
double division(int x,int y)
	{
	return((double)x/y);
	}

void main()
{
int result;double result2;
char str1[10];
printf("enter");
fgets(str1,10, stdin);
int a,b,c;
int d;
a=strcmp(str1,"add\n");
if(a==0)
{result=add(8,9);
printf("%d",result);
}
b=strcmp(str1,"sub\n");
if(b==0)
{result=sub(8,9);
printf("%d",result);
}
c=strcmp(str1,"multiply\n");
if(c==0)
{result=multiply(8,9);
printf("%d",result);
}
d=strcmp(str1,"division\n");
if(d==0)
{result2=(double)division(7,8);
printf("%.2f",result2);
}
}



