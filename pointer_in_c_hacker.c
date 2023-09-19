#include <stdio.h>
#include<math.h>
#include<stdlib.h>

void update(int *a,int *b)
{
    
    int i,j;
    i=*a + *b;
    j=abs(*a - *b);
    *a=i;
    *b=j;
    
}

int main() 
{
    int a, b;
    int *a = &a, *b = &b;
    scanf("%d %d", &a, &b);
    update(a, b);
    printf("%d\n %d", a, b);

    return 0;
}