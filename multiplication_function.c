#include<stdio.h>

int multiplication( int a, int b)
{
    int multi;

    multi=a*b;
    return multi;
}

int main()
{
    int a,b,m;
    scanf("%d %d",&a,&b);
    m=multiplication(a,b);
    printf("multiplication result=%d",m);
    return 0;
}