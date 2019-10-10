#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,N;
	printf("Enter a:");
	scanf("%d", &a);
	printf("Enter b:");
	scanf("%d", &b);
	printf("Enter c:");
	scanf("%d", &c);
	printf("Delitel N=");
	scanf("%d", &N);
	printf("N - delitel chisel:\n");
	if (a%N==0)
	{
		printf("%d\n",a);

	}

	if (b%N==0)
	{
		printf("%d\n",b);
	}

	if (c%N==0)
	{
		printf("%d\n",c);
	}
	return 0;
}
