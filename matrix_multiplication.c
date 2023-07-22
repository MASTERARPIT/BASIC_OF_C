#include<stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,n,m,l;

    printf("enter the no of row\n");
    scanf("%d",&n);
    printf("enter the no of column\n");
    scanf("%d",&l);

    printf("enter the element in array 1\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            scanf("%d\n",&a[i][j]);
        }
    }

    printf("enter the element in array 2\n");

    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            scanf("%d\n",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){

        for(j=0;j<l;j++){

            c[i][j]=0;

            for(m=0;m<n;m++){

                c[i][j]=c[i][j]+a[i][m]*b[m][j];

            }
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            printf("%d\n",c[i][j]);
        }
    }
    return 0;
}