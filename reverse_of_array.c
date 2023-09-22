#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a[1001], i;
    scanf("%d",&num);
    
    for(i = 0; i<num;i++) {
        scanf("%d ",&a[i]);
    }


    /* Write the logic to reverse the array. */

    for(i = num-1; i>= 0;i--){ 
        printf("%d ",a[i]);
    }
        
    return 0;
}