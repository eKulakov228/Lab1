#include <stdio.h>

int main() {
    int ticket,a,b,c,x,y,z;
    printf("Enter your ticket(6 digits):\n");
    scanf("%d", &ticket);
    if (ticket<1000000 && ticket>99999)
    {
        a=ticket/100000;
        b=ticket/10000%10;
        c=ticket/1000%10;
        x=ticket/100%10;
        y=ticket/10%10;
        z=ticket/1%10;
        if(a+b+c==x+y+z)
        {
            printf("Your ticket is happy!\n");
        }
        else printf("Your ticket is not happy:c\n");
    }
    else printf("Number of your ticket is wrong!\n");
    return 0;
}