#include<stdio.h>
int main()
{
    FILE *fptr1,*fptr2;
    char c;
    fptr1=fopen("input.txt","r");
    fptr2=fopen("output.txt","w");
    c = fgetc(fptr1);
    while(c!= EOF)
    {
        fputc(c,fptr2);
        c = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
