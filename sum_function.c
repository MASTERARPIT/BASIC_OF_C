#include<stdio.h>

int sum(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}

int main()
{
    int s,a,b;
    scanf("%d %d",&a,&b);
    
    s=sum(a, b);
    printf("%d",s);
    
    

    return 0;
}