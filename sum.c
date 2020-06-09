#include<stdio.h>
int main()
{
    FILE *fptr;
    int num1,sum=0;
    fptr=fopen("sample.txt","r");
    while(fscanf(fptr,"%d",&num1)!= EOF)
    {
        sum=sum+num1;
    }
    printf("The sum of the integers in the file sample.txt is:%d\n",sum);
    fclose(fptr);
    return 0;


}
