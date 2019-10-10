#include <stdio.h>
#include <math.h>

int main(){
	int ticket,a,b,c,x,y,z;
	printf("Enter your number (6 digits):");
	scanf("%d", &ticket);
	if (ticket<1000000 && ticket>99999) // number of ticket must be six digit
{
	a=ticket/100000; // 1 digit
	b=ticket/10000%10; // 2 digit
	c=ticket/1000%10;  // 3 digit
	x=ticket/100%10; // 4 digit
	y=ticket/10%10;	// 5 digit
	z=ticket/1%10;	// 6 digit
	if (a+b+c==x+y+z) // first 3 digits must be equal to last 3 digits
	{
		printf("Your ticket is happy!\n");
	}
		else printf("Your ticket is not happy :(\n");
	
}
 else printf("Number of your ticket is wrong \n");
	/*a=ticket/100000;
	b=ticket/10000%10;
	c=ticket/1000%10;
	x=ticket/100%10;
	y=ticket/10%10;
	z=ticket/1%10;
	printf("a=%d\n", a );
	printf("b=%d\n", b );
	printf("c=%d\n", c );
	printf("x=%d\n", x );
	printf("y=%d\n", y );
	printf("z=%d\n", z);*/

	return 0;
}
