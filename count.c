#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch;
    int count=0;
    fptr=fopen("sample.txt","r");
    while((ch=fgetc(fptr))!=EOF)
    {
        count ++;

    }
    fclose(fptr);
    printf("The number of characters present in file is: %d\n",count-1);
    return 0;
}
