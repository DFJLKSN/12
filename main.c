#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  i,month;
	double saving,rate,b;     
	scanf("%lf,%lf,%d",&saving,&rate,&month);
	b=saving;
	for(i=1;i<=month;i++)
	{
		saving=saving*(1+rate/12);
		saving+=b;
	}
	saving-=b;
	printf("%.2lf",saving);
	return 0;
}
