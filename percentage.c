#include<stdio.h>
int main()
{
    int a,b,c,d;
    float total,e,f,g,h;
    printf("Enter branding expenses\n");
    scanf("%d",&a);
    printf("Enter travel expenses\n");
    scanf("%d",&b);
    printf("Enter food expenses\n");
    scanf("%d",&c);
    printf("Enter logistics expenses\n");
    scanf("%d",&d);
    total=a+b+c+d;
    printf("Total expenses : Rs.%.2f\n",total);
    e=a/total*100.0;
    f=b/total*100.0;
    g=c/total*100.0;
    h=d/total*100.0;
    printf("Branding expenses percentage : %.2f%%\n",e);
    printf("Travel expenses percentage : %.2f%%\n",f);
    printf("Food expenses percentage : %.2f%%\n",g);
    printf("Logistics expenses percentage : %.2f%%\n",h);
    return 0;
}
