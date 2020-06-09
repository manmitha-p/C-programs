#include<stdio.h>
int main()
{
    int a,n=8,m=0,i=1,I=5;
    printf("Enter the side in cm of a square tile\n");
    printf("%d",I);
    printf("Enter the number of square tiles available\n");
    printf("%d",n);
    while(i*i<=n)
    {
    	m=i*i;
    	i++;
    	}
    	a=m*(I*I);
    printf("Area of the largest possible square is %dsqcm",a);
}
