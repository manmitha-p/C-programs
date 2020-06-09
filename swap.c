#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	printf("Enter the value of b\n");
	scanf("%d",&b);
	swap(&a,&b);
}
void swap(int *a,int *b)
{
	int temp=0;
	printf("Before swapping\na = %d b = %d\n",*a,*b);
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping\na = %d b = %d\n",*a,*b);

}
