#include<stdio.h>
int main()
{
    int cost,n,a;
    float discount;
    double m;
    scanf("%d",&cost);
    scanf("%d",&n);
    if(n<50)
    {
        m=(cost*n);
        printf("%.2f",m);
    }
    else if(n>=50&&n<=100)
    {
        a=(cost*n);
        discount=(a*10)/100;
        m=(a-discount);
        printf("%.2f\n",m);
    }
    else if(n>=101&&n<=200)
    {
        a=(cost*n);
        discount=(a*20)/100;
        m=(a-discount);
        printf("%.2f\n",m);
    }
    else if(n>=201&&n<=400)
    {
        a=(cost*n);
        discount=(a*30)/100;
        m=(a-discount);
        printf("%.2f",m);
    }
    else if(n>=401&&n<=500)
    {
        a=(cost*n);
        discount=(a*40)/100;
        m=(a-discount);
        printf("%.2f",m);
    }
        else if(n>=501)
    {
        a=(cost*n);
        discount=(a*50)/100;
        m=(a-discount);
        printf("%.2f",m);

    }
}
