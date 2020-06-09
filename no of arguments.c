#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,count=0;
    printf("Arguments :\n");
    for(i=1;i<argc;i++)
    {
        count++;
        printf("%s\n", argv[i]);
    }
    printf("Number of arguments is %d",count);
    return 0;
}
