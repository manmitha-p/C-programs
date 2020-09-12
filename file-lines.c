#include<stdio.h>
int main()
{
    FILE *fptr;
    int count=0;
    char c;
    fptr=fopen("input.txt","r");
    for(c=fgetc(fptr);c!=EOF;c=fgetc(fptr))
    {
    if(c=='\n')
    count = count+1;
    }
    fclose(fptr);
    printf("The file has %d lines\n",count);
    return 0;
}
