#include <stdio.h>

int main(){
    int a,b,c,N;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter N:");
    scanf("%d",&N);
    printf("N-delitel chisel:\n");
    if(a%N==0)
    {
        printf("a-%d\n",a);
    }

    if (b%N==0)
    {
        printf("b-%d\n",b);
    }

    if (c%N==0)
    {
        printf("c-%d\n",c);
    }
    
    return 0;
}