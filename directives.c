#include<stdio.h>
#define PI 3.1415
int main()
{
    int radius;
    float area;
    scanf("%d",&radius);
    area = PI*radius*radius;
    printf("%.2f",area);
    return 0;
}
