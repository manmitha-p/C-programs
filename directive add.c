#include<stdio.h>
#define ADD(a,b) a+b
int main()
{
    int x,y;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
    printf("The sum is : %d\n",ADD(x,y));
    return 0;
}
