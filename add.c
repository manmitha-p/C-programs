#include<stdio.h>
void addition(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    addition(&a,&b);
    return 0;

}
void addition(int *a,int *b)
{
    int sum=0;
    sum=*a+*b;
    printf("Sum of two elements = %d\n",sum);
}
