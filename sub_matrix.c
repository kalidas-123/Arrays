//C PROGRAM TO SUBTRACT TWO MATRICES

#include<stdio.h>
#define SIZE 20
int main()
{
    int a[SIZE][SIZE],b[SIZE][SIZE],c[SIZE][SIZE],i,j,m,n,p,q;

    printf("Enter the order of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d",&p,&q);

    if(m == p && n == q)
    {
        printf("Enter elements of first matrix\n");
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < n ; j++)
                scanf("%d",&a[i][j]);
        }

        printf("Enter elements of second matrix\n");
        for(i = 0 ; i < p ; i++)
        {
            for(j = 0 ; j < q ; j++)
                scanf("%d",&b[i][j]);
        }

        printf("Resultant matrix is\n");
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < n ; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Order of matrix are different\n");
    }
    return 0;
}